#include "holberton.h"
/**
 * main - Entry Point
 *
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Description: Copies content from one file to another.
 *
 * Return: 0.
 */

int main(int ac, char **av)
{
	int src_file, dest_file;
	ssize_t  l_read = 1024, l_write, close_file;
	char content[1024];

	if (ac != 3)
	{ dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	src_file = open(av[1], O_RDONLY);
	if (src_file == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
			exit(98); }
	dest_file = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_file == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	while (l_read == 1024)
	{
		l_read = read(src_file, content, 1024);
		if (l_read == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98); }
		l_write = write(dest_file, content, l_read);
		if (l_write == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99); }
	}
	close_file = close(src_file);
	if (close_file == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", src_file);
		exit(100); }
	close_file = close(dest_file);
	if (close_file == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", dest_file);
		exit(100); }
	return (0);
}
