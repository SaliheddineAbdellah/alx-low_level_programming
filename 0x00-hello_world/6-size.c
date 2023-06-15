#include <stdio.h>
/**
 *main - entry point
 *Return : 0 succes
 */
int main(void)
{
	printf("Size of char : %li byte(s)\n", sizeof(char));
	printf("Size of an int: %li byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
	printf("Size of a float: %li byte(s)", sizeof(float));
	return (0);
}
