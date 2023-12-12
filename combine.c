#include "libs.h"
/**
 * _combine_path - combines two strings into a single path
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string
 */
char *_combine_path(const char *s1, const char *s2)
{
size_t len1, len2;
size_t t;
char *nString;

len1 = strlen(s1);
len2 = strlen(s2);
nString = malloc(sizeof(char) * (len1 + len2 + 2));
if (!nString)
return (NULL);
t = 0;
while (t < len1)
{
nString[t] = s1[t];
t++;
}
nString[t] = '/';
t++;
while (t - len1 - 1 < len2)
{
nString[t] = s2[t - len1 - 1];
t++;
}
nString[t] = 0;
return (nString);
}
