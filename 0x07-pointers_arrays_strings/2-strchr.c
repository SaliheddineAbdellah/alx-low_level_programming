#include "main.h"
/**
 * *_strchr -  locates a character in a string.
 * @c: char to search
 * @s: string to be searched
 * Return: pointer to the first occurence of the c or NULL if it doesnt exist
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
