#include "main.h"

/**
 * _isalpha - use ascii to print alpha  case
 *@c : character for checking case
 * Return: value
 */

int _isalpha(int c)
{

	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));

}
