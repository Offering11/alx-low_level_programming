#include "main.h"
/**
* _memset - function that fills memory with a constant byte.
* @s: string
* @b: a character
* @n: an interger
* Return: string (s);
*/

char *_memset(char *s, char b,  int n)
{
    unsigned int i;
    
    for(i = 0;i < n;i++)
    {
        s[i] =  b;
    }
    return (s);
}
