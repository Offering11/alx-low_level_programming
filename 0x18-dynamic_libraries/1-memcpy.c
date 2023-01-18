#include "main.h"

/**
* _memcpy - function that copies memory area.
* @src: source where you copy from
* @dest: destination of copied to
* @n: variable
* Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
