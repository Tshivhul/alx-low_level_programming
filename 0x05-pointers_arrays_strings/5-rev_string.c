#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: the pointer to the string
 * Return: 0
 */

void rev_string(char *s)
{
	char temp;
	int len, half, z;

	for (len = 0; s[len] != '\0'; len++)
		;
	z = 0;
	half = len / 2;
	while (half--)
	{
		temp = s[len - z - 1];
		s[len - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}
