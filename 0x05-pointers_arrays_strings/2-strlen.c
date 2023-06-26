#include "main.h"
/**
 *_strlen - returns the length of a string.
 *@s: list of char to be checked
 *Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
