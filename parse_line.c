#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *
 *
 */
char **parse_line(char *buffer)

{
int i = 0, size = 64;
char *tok;
char **tokenp = malloc(size * sizeof(char*)); 
if (tokenp == NULL)
{
exit(EXIT_FAILURE);
}
tok = strtok(buffer, " ");
while (tok != NULL)
{
tokenp[i] = tok;
tok = strtok(NULL, " ");
i = i + 1;
}
tokenp[i] = NULL;  
return (tokenp);
}
