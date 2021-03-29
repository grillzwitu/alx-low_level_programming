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
	ssize_t file, n_ltrs;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

        buf = malloc(sizeof(char) * letters);
	n_ltrs = read(file, buf, letters);
	if (n_ltrs == -1)
	{
		free(buf);
		return (0);
	}

	write(STDOUT_FILENO, buf, n_ltrs);
	close(file);
	free(buf);

	return (n_ltrs);
}
