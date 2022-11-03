#include "main.h"
/**
* _puts_recursion - function that prints a string, followed by a new line.
* @s: string
* Return: 0
*/

void _puts_recursion(char *s)
{
	putchar (*s);
	s++;
	if (*s == '\0')
	{
		putchar ('\n');
		return (0);
	}
	_puts_recursion(s);
}
