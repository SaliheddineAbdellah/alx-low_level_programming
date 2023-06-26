#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: to be reversed
 */
void rev_string(char *s)
{
	char rev;
	int i;
	int j;

	rev = s[0];
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		rev = s[j];
		s[j] = s[i];
		s[i] = rev;
	}
}
