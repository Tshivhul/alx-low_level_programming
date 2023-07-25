#include "main.h"
/**
 * *_strcpy - copies the string
 * @dest: string of type char
 * @src: string of type char
 * Description: Copy the string pointed to by 'src'
 * to the buffer pointed by 'dest'
 * Return: Pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
int n = -1;

do {
	n++;
	dest[n] = src[n];
} while (src[n] != '\0');
return (dest);
	}
