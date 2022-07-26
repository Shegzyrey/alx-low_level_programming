#include "main.h"

/**
 * _strlen - sting length function
 * @s: string to count
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}


/**
 * append_text_to_file - append text to the end of a file
 * @filename: pointer to the file
 * @text_content: text to be appended
 * Return: 1 on sucess & -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int reader, output, cnt;

	if (filename == NULL)
		return (-1);

	reader = open(filename, O_WRONLY | O_APPEND);

	if (reader == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	cnt = _strlen(text_content);

	output = write(reader, text_content, cnt);
	if (output == -1)
		return (-1);
	close(reader);
	return (1);
}
