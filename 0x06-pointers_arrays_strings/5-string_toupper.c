#include <ctype.h>
#include <stddef.h>
#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)

{
	char *ptr;

	if (str == NULL)
	return (NULL);

	for (ptr = str; *ptr != '\0'; ptr++)
	{
	if (islower(*ptr))
	{
	*ptr = toupper(*ptr);
	}
	}
return (str);
}

