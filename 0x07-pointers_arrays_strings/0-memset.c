#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: areas of memory to be filled
 * @b: char to copy
 * @n: number of times to copy c
 *
 * Return: pointer to s memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

