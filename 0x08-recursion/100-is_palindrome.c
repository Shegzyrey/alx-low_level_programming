#include "main.h"

/**
 * _strlen_recursion - find length of a string
 * @st: string to count
 *
 * Return: string length
 */

int _strlen_recursion(char *st)
{
	if (*st  == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(st + 1));
}
/**
 * check_palindrome - is string palindrome
 * @lef: start index
 * @rig: end index
 * @str: string to check
 *
 * Return: 1 if true, 0 if false
 */

int check_palindrome(int lef, int rig, char *str)
{
	if (lef >= rig)
		return (1);
	else if (str[lef] != str[rig])
		return (0);
	else
		return (check_palindrome(lef + 1, rig - 1, str));
}
/**
 * is_palindrome - recursively checks for palindrome
 * @s: pointer to the string
 *
 * Return: value
 */

int is_palindrome(char *s)
{
	int j;

	j = _strlen_recursion(s) - 1;
	return (check_palindrome(0, j, s));
}
