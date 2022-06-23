#include "main.h"
/**
 * prime_check - check if n is prime
 * @num: possible prime
 * @i:factor check
 *
 * Return: 0
 */

int prime_check(int num, int i)
{
	if ((num % i == 0 || num < 2)
		return (0);
	else if (i > num / 2)
		return (1);
	else
		return (prime_check(i + 1, num));
}
/**
 * is_prime_number - return prime numbers
 * @n: number to check
 *
 * Return: return prime number
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
