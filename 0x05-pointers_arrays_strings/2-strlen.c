#include "main.h"
/**
 * _strlen - Checks the length on the string
 * @s: String to be checked
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
