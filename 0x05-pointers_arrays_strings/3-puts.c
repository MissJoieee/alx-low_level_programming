#include "main.h"
/**
 * _puts - print strings
 * @str: function parrameter
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
