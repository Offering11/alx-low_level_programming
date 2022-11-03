#include "main.h"

/**
* _print_rev_recursion - function.
* @s: string to reverse.
* Return: return;
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
