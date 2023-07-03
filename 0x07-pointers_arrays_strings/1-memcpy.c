#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @src: to copy from
 * @dest: to copy into
 * @n: nbr of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n > 0)
	{
		dest = src;
		dest++;
		serc++;
		n--;
	}
	return (original_dest);
