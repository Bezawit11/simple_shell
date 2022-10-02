#include <stdio.h>
#include "main.h"

/**
 *check_repeat - checks for command repititions
 *@tokenz: double pointer
 *Return: returns 0 if fail else returns no of times
 */
int check_repeat(char **tokenz)

{
int k, i, l = 0;
for (i = 0; tokenz[i + 1] != NULL; i++)
{
k = _strcmp(tokenz[0], tokenz[i + 1]);
if (k != 0)
{
break;
}
l++;
}
if (tokenz[i + 1] != NULL)
{
return (1);
}
else
return (l + 1);
}
