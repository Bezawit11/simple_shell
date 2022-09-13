#include "main.h"

/**
 *_strlen - finds the length of a string
 *@s: string input
 *Return: returns length
 */
int _strlen(char *s)

{
int l = 0, i = 0;
while (s[i] != '\0')
{
l++;
i++;
}
return (l);
}

/**
 *_strcmp - compares two strings
 *@s1: string input
 *@s2: string input
 *Return: returns 0 if matched
 */
int _strcmp(char *s1, char *s2)

{
int l = 0, i, r, a, b, j;
for (j = 0; s1[j] != '\0'; j++)
{
l++;
}
for (i = 0; i < l; i++)
{
if (*(s1 + i) != *(s2 + i))
break;
}
a = s1[i];
b = s2[i];
r = a - b;
return (r);
}

/**
 *_strtok - tokenizes a string
 *@str: string input
 *@delim: string delimeter
 *Return: returns a pointer
 */
char *_strtok(char *str, const char *delim)

{
int i, j = 0, l = 0;
static char *copy, *cop;
if (str == NULL)
{
copy = _strtok(cop, delim);
return (copy);
}
for (j = 0; str[j] != '\0'; j++)
{
l++;
}
copy = malloc(l);
cop = malloc(l);
for (i = 0; str[i] != '\0'; i++)
{
copy[i] = str[i];
}
if (i == 0)
return (NULL);
for (i = 0; copy[i] != '\0'; i++)
{
if (copy[i] == ' ')
break;
}
copy[i] = '\0';
i++;
j = 0;
while (str[i] != '\0')
{
cop[j] = str[i];
i++;
j++;
}
cop[j] = '\0';
return (copy);
}
