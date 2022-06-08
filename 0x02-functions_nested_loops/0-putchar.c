#include "main.h"
#include<unistd.h>

/**
 * main - program entry
 *
 * Return: 0 on success
 */

int main(void)
{
	write(1, "_putchar", 8);

	_putchar('\n');

	return (0);
}
