#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

#define ELF_MAGIC "\x7F\x45\x4C\x46" // ELF magic number

/**
 * struct Elf64_Ehdr - ELF header structure
 * @e_ident:   ELF identification bytes
 * @e_type:    Object file type
 * @e_machine: Machine architecture
 * @e_version: ELF version
 * @e_entry:   Entry point virtual address
 * @e_phoff:   Program header table file offset
 * @e_shoff:   Section header table file offset
 * @e_flags:   Processor-specific flags
 * @e_ehsize:  ELF header size
 * @e_phentsize: Size of program header entry
 * @e_phnum:   Number of program header entries
 * @e_shentsize: Size of section header entry
 * @e_shnum:   Number of section header entries
 * @e_shstrndx: Index of section header string table
 */
typedef struct Elf64_Ehdr
{
	char e_ident[16];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
} Elf64_Ehdr;

/**
 * display_elf_header - Display ELF header information
 * @filename: ELF file name
 */
void display_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", filename);
		exit(98);
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header from file: %s\n", filename);
		close(fd);
		exit(98);
	}

	if (memcmp(header.e_ident, ELF_MAGIC, 4) != 0)
	{
		fprintf(stderr, "Not a valid ELF file: %s\n", filename);
		close(fd);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < 16; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n",
	       header.e_ident[4] == 1 ? "ELF32" : (header.e_ident[4] == 2 ? "ELF64" : "Unknown"));
	printf("  Data:                              %s\n",
	       header.e_ident[5] == 1 ? "2's complement, little endian" : "Unknown");
	printf("  Version:                           %u (current)\n", header.e_ident[6]);
	printf("  OS/ABI:                            %s\n",
	       header.e_ident[7] == 0 ? "UNIX - System V" : "Unknown");
	printf("  ABI Version:                       %u\n", header.e_ident[8]);
	printf("  Type:                              %u\n", header.e_type);
	printf("  Entry point address:               0x%lx\n", header.e_entry);

	close(fd);
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Array of command-line arguments
 * Return: Exit status
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return 1;
	}

	display_elf_header(argv[1]);
	return 0;
}
