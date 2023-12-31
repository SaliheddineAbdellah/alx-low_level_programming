#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize the array with
 * Return: array of chars or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
