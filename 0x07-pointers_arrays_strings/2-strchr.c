#include "main.h"
/**
* _strchr - function that locates a character in a string.
* @s: atring
* @c: variable to locate
*
* Return: s || NULl
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
