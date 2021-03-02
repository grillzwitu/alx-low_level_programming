#include "holberton.h"

/**
 * word_len - entry point
 *
 * @str: char argument(The string to be searched).
 *
 * Description: Locates the index marking the end of the
 * first word contained within a string.
 *
 * Return: lenght of word.
 */

int word_len(char *str)
{
int index = 0, len = 0;

while (*(str + index) && *(str + index) != ' ')
{
len++;
index++;
}

return (len);
}

/**
 * count_words - entry point
 *
 * @str: Char argument(The string to be searched).
 *
 * Description: Counts the number of words contained within a string.
 *
 * Return: The number of words.
 */

int count_words(char *str)
{
int index = 0, words = 0, len = 0;

for (index = 0; *(str + index); index++)
len++;

for (index = 0; index < len; index++)
{
if (*(str + index) != ' ')
{
words++;
index += word_len(str + index);
}
}

return (words);
}

/**
 * strtow - Entry point
 *
 * @str: The string to be split.
 *
 * Description: Splits a string into words.
 *
 * Return: NULL (If str = NULL, str = "", or the function fails).
 * Otherwise - a pointer to an array of strings (words).
 */

char **strtow(char *str)
{
char **strings;
int index = 0, words, w, letters, l;

if (str == NULL || str[0] == '\0')
return (NULL);

words = count_words(str);
if (words == 0)
return (NULL);

strings = malloc(sizeof(char *) * (words + 1));

if (strings == NULL)
return (NULL);

for (w = 0; w < words; w++)
{
while (str[index] == ' ')
index++;

letters = word_len(str + index);

strings[w] = malloc(sizeof(char) * (letters + 1));

if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);

free(strings);
return (NULL);
}

for (l = 0; l < letters; l++)
strings[w][l] = str[index++];

strings[w][l] = '\0';
}
strings[w] = NULL;

return (strings);
}
