#include <stdio.h>
#include <stdlib.h>
/**
*main-program entry point.
*Return:0 if no errors, non-zero if errors.
*/

int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		printf("%c", letter);
	}
	printf("\n");
	return (0);
}
