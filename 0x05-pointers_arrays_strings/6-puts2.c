#include "main.h"

/**
 * puts2 - prints values divisible by 2
 * @str: the used pointer
 * Return: 0
 */

void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
