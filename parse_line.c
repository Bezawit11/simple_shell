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
tokenz = malloc(size * sizeof(char *));
if (tokenz == NULL)
{
exit(EXIT_FAILURE);
}
for (j = 0; buffer[j] != '\0'; j++)
{
if (buffer[j] != " ")
break;
}
if (buffer[j] == '\0'){
tokenz[0] = " ";
tokenz[1] = NULL;
return (tokenz);
}
tok = strtok(buffer, " ");
while (tok != NULL)
{
tokenz[i] = tok;
tok = strtok(NULL, " ");
i = i + 1;
}
tokenz[i] = NULL;
return (tokenz);
}
