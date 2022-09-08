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
