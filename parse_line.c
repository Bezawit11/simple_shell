#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *parse_line - tokenization
 *@buffer: command to be tokenized
 *Return: returns a double poiner of tokenized command
 */
char **parse_line(char *buffer, char **tokenz, char *n)

{
int i = 0, size = 64, j, r, l;
char *tok;
tokenz = malloc(size * sizeof(char *));
l = strlen(buffer);
n = malloc(l + 5);
if (tokenz == NULL)
{
exit(EXIT_FAILURE);
}
r =  if_builtin(buffer);
if (*buffer != '/' && r == 2)
{
strcpy(n, "/bin/");
strcat(n, buffer);
}
else
{
strcpy(n, buffer);
}
for (j = 0; n[j] != '\0'; j++)
{
if (n[j] != ' ')
break;
}
if (n[j] == '\0'){
tokenz[0] = " ";
tokenz[1] = NULL;
return (tokenz);
}
tok = strtok(n, " ");
while (tok != NULL)
{
tokenz[i] = tok;
tok = strtok(NULL, " ");
i = i + 1;
}
tokenz[i] = NULL;
return (tokenz);
}
