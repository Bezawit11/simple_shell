#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *parse_line - tokenization
 *@buffer: command to be tokenized
 *Return: returns a double poiner of tokenized command
 */
char **parse_line(char *buffer, char **tokenz)

{
int i = 0, size = 64, j;
char *tok;
char *c = malloc(100);
tokenz = malloc(size * sizeof(char *));
if (tokenz == NULL)
{
exit(EXIT_FAILURE);
}
if (*buffer != '/')
{
strcpy(c, "/bin/");
strcat(c, buffer);
}
else
{
strcpy(c, buffer);
}
for (j = 0; c[j] != '\0'; j++)
{
if (c[j] != ' ')
break;
}
if (c[j] == '\0'){
tokenz[0] = " ";
tokenz[1] = NULL;
return (tokenz);
}
tok = strtok(c, " ");
while (tok != NULL)
{
tokenz[i] = tok;
tok = strtok(NULL, " ");
i = i + 1;
}
tokenz[i] = NULL;
return (tokenz);
}
