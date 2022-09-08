#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *check_builtin - checks for builtin commands
 *@tokenz: double pointer to tokenization
 *Return: returns intgers
 */
int check_builtin(char **tokenz)

{
int i, k, l;
char* builtins[] = {"echo", "exit", "env", NULL};
for (i = 0; i <= 2; i++)
{
k = _strcmp(tokenz[0], builtins[i]);
if (k == 0)
{
break;
}
}
if (i == 3)
return (2);
if (i == 0)
{
l = _strlen(tokenz[1]);
write(1, tokenz[1], l);
write(1, "\n", 1);
return (1);
}
if (i == 1)
return (0);
if (i == 2)
{
for_env();
return (1);
}
return (2);
}
