#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
int check_repeat(**tokenz)

{
int k, i, l = 0;
for (i = 0; tokenz[i] != NULL; i++)
{
k = _strcmp(tokenz[0], tokenz[i + 1]);
if (k != 0)
{
break;
}
l++;
}
if (tokenz[i] != NULL)
{
return (0);
}
else
return (l);
}
