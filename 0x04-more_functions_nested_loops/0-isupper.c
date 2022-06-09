#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if character is in upper case
 *@c: character check
 * Return: 0 or 1
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')

		return (1);

	else

		return (0);

}
