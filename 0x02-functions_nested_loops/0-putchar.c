#include "main.h"

/**
 * main - program entry
 *
 * Return: 0 if succes
 */
int main(void)
{
	_putchar = '_';
	char i[] = "putchar";
	int j;

	for (j = 0; j < 8; j++)
	{
		_putchar(i[j]);
	}
	_putchar('\n');
	return (0);
}
