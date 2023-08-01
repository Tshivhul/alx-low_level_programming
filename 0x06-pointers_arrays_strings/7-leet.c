#include <stdio.h>
/**
 * *leet - function that encodes a string into 1337
 * @str: Pointer to string
 * Return: Pointer to str
 */

char *leet(char *str)
{
	char leet_dict[] = "aAeEoOtTlL";
	char leet_repl[] = "443370711";

	for (int i = 0; str[i] != '\0'; i++)
	{
	for (int j = 0; leet_dict[j] != '\0'; j++)
	{
	if (str[i] == leet_dict[j])
	{
	str[i] = leet_repl[j];
	break;
	}
	}
	}

	return (str);
}

