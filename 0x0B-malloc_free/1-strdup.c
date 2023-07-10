#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: NULL if str empty or duplicated string
 */
char *_strdup(char *str)
{
	char *copied_str;
	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;

	copied_str = malloc(sizeof(char) * (i + 1));

	if (copied_str == NULL)
		return (NULL)

	for (j = 0; j <= i; j++)
		copied_str[j] = str[j];

	return (copied_str);
}

