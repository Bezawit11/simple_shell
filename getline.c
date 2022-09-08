#include <stdio.h>
#include "main.h"

/**
 *
 *
 */
char *readcmd()

{
int l, p;
size_t bufsize = 0;
char *command = NULL;
p = isatty(STDIN_FILENO);
if (p == 1)
{
write(1, " ($) ", 5);
}
/*if(*/
getline(&command, &bufsize, stdin);
/*== -1)
{
if (feof(stdin)) 
{
exit(EXIT_SUCCESS);
}
else  
{
perror("readline");
exit(EXIT_FAILURE);
}
}*/
l = _strlen(command);
l = l - 1;
if (command[l] == '\n')
{
*(command + l) = '\0';
}
return (command);
}
