#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of arguments argument count
 * @argv: array of arguments argument vectors
 * Return: always 0 (success)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
