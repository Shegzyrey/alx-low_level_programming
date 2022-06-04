#include <stdio.h>
#include <stdlib.h>

/**
*main-program entry point.
*Return:0 if no errors, non-zero if errors.
*/

int main(void)
{
	int b;

	char hexvalues[] = "0123456789abcdef";

	for (b = 0; b <= 16; b++)
	{
		putchar(hexvalues[b]);
	}

	putchar('\n');

	return (0);
}
