#include <stdio.h>
#include "main.h"

/**
 *readcmd - reads input
 *@command: input command
 *Return: returns a pointer to the command
 */
char *readcmd(char *command)

{
int l, p;
size_t bufsize = 0;
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
if (command[l] == '\n'|| command[l] == EOF)
{
*(command + l) = '\0';
}
return (command);
}
