#include "main.h"

/**
 * create_file - function to create a file
 * @filename: pointer to the file name to be created
 * @text_content: str to be written in the file
 * Return: 1 for success & -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int input, output, cnt = 0;

	if (filename == NULL)
		return (-1);
	input = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (input == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	for (; text_content[cnt] != '\0'; cnt++)
		;

	output = write(input, text_content, cnt);
	if (output == -1 || output != cnt)
		return (-1);

	close(input);
	return (1);
}
