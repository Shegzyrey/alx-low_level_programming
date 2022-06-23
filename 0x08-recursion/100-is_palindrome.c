#include "main.h"

/**
 * _strlen_recursion - find length of a string
 * @s: string to count
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - is string palindrome
 * @li: start index
 * @ri: end index
 * @str: string to check
 *
 * Return: 1 if true, 0 if false
 */

int check_palindrome(char str[], int li, int ri)
{
	if (li == ri)
		return (1);
	else if (str[li] != str[ri])
		return (0);
	else if (li < ri + 1)
		return (check_palindrome(str, li + 1, ri - 1));
	else
		return (1);
}
/**
 * is_palindrome - recursively checks for palindrome
 * @s: pointer to the string
 *
 * Return: value
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;
	return (check_palindrome(0, i, s));
}
