#include "main.h"

/**
 * main - program entry
 *
 * Return: 0 if succes
 */
int main(void)
{
	char i[] = "_putchar";
	int j;

	for (j = 0; j < 9; j++)
	{
		_putchar(i[j]);
	}
	_putchar('\n');
	return (0);
}
