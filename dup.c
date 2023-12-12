#include "libs.h"
/**
 * _strdup -  function that returns a pointer to
 *                a newly allocated space in memory,
 *                    which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated
 * Return: On success, returns a pointer to the duplicated string. If str is
 *         NULL or if memory allocation fails, returns NULL
*/
char *_strdup(char *str)
{
char *dup;
int i, len = 0;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
len++;

dup = malloc(sizeof(char) * (len + 1));

if (dup == NULL)
return (NULL);

for (i = 0; str[i]; i++)
dup[i] = str[i];

dup[len] = '\0';

return (dup);
}
