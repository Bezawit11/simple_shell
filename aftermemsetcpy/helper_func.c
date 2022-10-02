#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
int if_builtin(char *buffer)

{
int i, k;
char *builtins[] = {"echo", "exit", "env", " ", NULL};
for (i = 0; i <= 3; i++)
{
k = _strcmp(buffer, builtins[i]);
if (k == 0)
{
break;
}
}
if (i == 4)
return (2);
if (i == 3)
return (1);
if (i == 0)
{
return (1);
}
if (i == 1)
return (0);
if (i == 2)
{
return (1);
}
return (2);
}
