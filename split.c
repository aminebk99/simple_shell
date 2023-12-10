#include "libs.h"
/**
 * split - Splits a string into substrings based on a delimiter
 * @path: The string to be split
 * @del: The delimiter string
 * Return: An array of strings containing the split substrings
 */
char **split(char *path, char *del)
{
	int c = 0;
	char **splitted = (char **)malloc(sizeof(char *) * (strlen(path) + 1));
	char *split_helper = strtok(path, del);

	while (split_helper != NULL)
	{
	splitted[c] = _strdup(split_helper);
	split_helper = strtok(NULL, del);
	c++;
	}
	splitted[c] = NULL;
	return (splitted);
}
