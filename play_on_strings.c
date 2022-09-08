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
