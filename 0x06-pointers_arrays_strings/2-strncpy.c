#include <stddef.h>

/**
 * _strncpy - Copy at most n characters from src to dest.
 * If src has less than n characters, the rest of dest is filled with '\0'.
 *
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: Pointer to the destination string (dest).
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}

	return (dest);
}

