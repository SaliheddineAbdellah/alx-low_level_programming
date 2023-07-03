#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: input
 * @accept: input
 * Return: nbr of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
	s++;
	}
	return ('\0');
}
