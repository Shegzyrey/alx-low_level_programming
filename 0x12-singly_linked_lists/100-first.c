#include <stdio.h>

void __attribute__((constructor)) message(void);

/**
* message - Prints a text before main
*/

void message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
