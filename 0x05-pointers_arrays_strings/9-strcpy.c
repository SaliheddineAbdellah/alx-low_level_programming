#include "main.h"
/**
 * *_strcpy - copies the string pointed to the buffer pointed to
 * @dest: the buffer pointed to
 * @src: the string pointed to
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
