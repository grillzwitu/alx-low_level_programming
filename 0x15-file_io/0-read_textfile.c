#include "holberton.h"

/**
 * read_textfile - Entry Point.
 *
 * @filename: File to be read.
 * @letters: number of letters to read and write.
 *
 * Deescription: Reads a text file and prints it to the POSIX standard output.
 *
 * Return: Number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        ssize_t nletters, file;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	nletters = read(file, buffer, sizeof(char) * letters);
	if (nletters == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	nletters = write(STDOUT_FILENO, buffer, nletters);
	if (nletters == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (nletters);
}
