#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main-entry point for the program.
 *
 *Return: Print positive, negative or zero if runs successfuly.
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
		printf("The number is positive");
	return (0);
	if (n==0)
		printf("The number is zero");
	return (0);
	if (n<0)
		printf("The number is negative");
	return (0);
}
