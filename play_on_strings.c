#include "main.h"

/**
 *
 *
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
 *
 *
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
