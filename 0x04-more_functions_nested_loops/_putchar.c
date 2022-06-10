#incude <unistd.h>

/**
 * _putchar - write character to stdio
 * @c: The character
 *
 * Return: 1
 * error return -1
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}
