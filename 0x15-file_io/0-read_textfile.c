#include "main.h"

/**
 * read_textfile - funtion to read and print text file to stdout
 * @filename: pointer to the file to be read andprinted
 * @letters: number of bytes in the file
 * Return: 0 if success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, output, fd;
	char buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	reader = read(fd, buff, letters);

	if (reader == -1)
	{
		free(buff);
		return (0);
	}

	output = write(STDOUT_FILENO, buff, reader);

	if (output == -1 || output != reader)
	{
		free(buff);
		return (0);
	}

	close(fd);
	free(buff);
	return (output);
}

