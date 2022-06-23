#include "main.h"
/**
 * root_checker - check the root condition
 * @n: number to check
 * @i: guess value
 *
 * Return: value
 */
int root_checker(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if ((i * i) < n)
		return (root_checker(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - return natural square root
 * @n: number to find it's root
 *
 * Return: sqr root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (root_checker(n, 1));
}
