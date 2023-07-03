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
	int i, j;

	i = 0;
	j = n;
	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
