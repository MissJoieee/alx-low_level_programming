#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: the searched string
 * @accept: the byte to be searched
 *
 * Return: if a set is matched - return pointer to the matched set.
 * if no set is matched - return NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
