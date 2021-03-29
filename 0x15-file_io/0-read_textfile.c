#include "holberton.h"

/**
 * read_textfile - Entry Point.
 *
 * @filename: File to be read
 * @letters: number of letters to read and write.
 *
 * Deescription: Reads a text file and prints it to the POSIX standard output.
 *
 * Return: Number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t no_ltrs;
	int file;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	no_ltrs = read(file, text, sizeof(char) * letters);
	if (no_ltrs == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	no_ltrs = write(STDOUT_FILENO, text, no_ltrs);
	if (no_ltrs == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (no_ltrs);
}
