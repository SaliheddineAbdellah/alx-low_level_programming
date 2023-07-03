#include "main.h"
/**
 * *_strchr -  locates a character in a string.
 * @c: char to search
 * @s: string to be searched
 * Return: pointer to the first occurence of the c or NULL if it doesnt exist
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;
	char *pc;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}
	if (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			pc[j] = s[i];
			i++;
			j++;
		}
		return (pc);
	}
	return (NULL);
}

