#include "main.h"

/**
 * _pow_recursion - returns the power of 2 integers
 * @x: base number
 * @y: power factor
 *
 * Retunrn: the power of the numbers
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else (y > 0)
		return (x * _pow_recursion(x, y-1);
}
