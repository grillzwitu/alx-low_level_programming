#include "holberton.h"

/**
 * _strlen - Entry Point
 *
 * @s: input char
 *
 * Description: Counts the lenght of a string
 *
 * Return: length of a string
 **/

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}

/**
 * create_file - Entry Point
 *
 * @filename: File to be created.
 * @text_content: String content to be written into the file.
 *
 * Description: Creates a file.
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t no_ltrs;
	int file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		no_ltrs = write(file, text_content, _strlen(text_content));
		if (no_ltrs == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
