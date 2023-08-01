#include <stddef.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (*dest_ptr)
	{
	dest_ptr++;
	}
	while (*src_ptr)
	{
	*dest_ptr++ = *src_ptr++;
	}

	*dest_ptr = '\0';

	return dest;
}
