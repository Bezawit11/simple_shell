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
int i = 0, size = 64, r, j;
char *tok = malloc(50);
char n[100];
tokenz = malloc(size * sizeof(char *));
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
/*i = 0;
while (tokenz[i] != NULL){
printf("%s\n", tokenz[i]);
i++;
}*/
tokenz[i] = NULL;
free(tok);
return (tokenz);
}
