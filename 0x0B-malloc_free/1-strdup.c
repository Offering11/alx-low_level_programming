#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	ptr = malloc((sizeof(char)) * len);
	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
