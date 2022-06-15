#include "main.h"

/**
 * puts2 - prints every 2 characters of a string 
 *
 * @str: the string to that wil be printed
 *
 * return: always 0
 */

void puts2(char *str)
{
	char s[] = "";

	for(int i = 0; i < strlen(str); i+=2)
	{
		_putchar(str[i]);
		s[i/2] = str[i];
	}
	_putchar('\n');

	return 0;

}	
