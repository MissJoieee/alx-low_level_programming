#include <stdio.h>

/**
 * main - size is not grandeur
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of a int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
