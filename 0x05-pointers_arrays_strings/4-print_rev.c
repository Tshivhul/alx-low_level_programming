#include "main.h"
/**
 * print_rev - Prints the string in reverse
 * @s: the pointer string used
 * Return: 0
 */

void print_rev(char *s)
{
	int r = 0;

	while (s[r])
		r++;
	while (r--)
		_putchar(s[r]);
	_putchar('\n');
}
