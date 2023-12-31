#include <ctype.h>
#include "main.h"
/**
 * *cap_string - Function that is going to capitalize all string characters
 * @*str: pointer to string
 * Return: pointer to *str
 */

char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *p = str;

	while (*p != '\0')
	{
	if (*p == ' ' || *p == '\t' || *p == '\n' ||
	*p == ',' || *p == ';' || *p == '.' || *p == '!' ||
	*p == '?' || *p == '"' || *p == '(' || *p == ')' ||
	*p == '{' || *p == '}')
	{
	capitalize_next = 1;
	}
	else if (isalpha(*p))
	{
	if (capitalize_next)
	{
	*p = toupper(*p);
	capitalize_next = 0;
	}
	else
{
	*p = tolower(*p);
	}
	}
	p++;
	}

	return (str);
}

