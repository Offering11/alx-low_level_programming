#include "main.h"

/**
*_isupper- is a function that check for uppercase character
*@c: initial parameter*
*_isupper:is our given function*
* Return:Successful will return 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
