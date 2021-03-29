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
 * append_text_to_file - Entry Point
 *
 * @filename: File to be appended.
 * @text_content: Content to be appended into the file.
 *
 * Description: Appends text at the end of a file.
 *
 * Return: 1 (success), -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t n_ltrs;
	int file;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		n_ltrs = write(file, text_content, _strlen(text_content));
		if (n_ltrs == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);

	return (1);
}
