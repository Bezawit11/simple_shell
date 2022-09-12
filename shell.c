#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - simple shell
 *Return: returns 1 on success
 */
int main(void)

{
int h = 1, status, p, c;
char *buffer = NULL;
char **tokenz;
pid_t pid;
while (h == 1)
{
p = isatty(STDIN_FILENO);
buffer = readcmd(buffer);
tokenz = parse_line(buffer);
c = check_builtin(tokenz);
if (c == 0){
free(buffer);
free(tokenz);
break;}
if (c == 1)
{
free(buffer);
free(tokenz);
continue;
}
pid = fork();
if (pid == 0)
{
if (execve(tokenz[0], tokenz, environ) == -1)
perror("Error");
exit(1);
}
else if (pid < 0)
perror("Error");
else
wait(&status);
free(buffer);
free(tokenz);
if (p != 1)
h--;
}
return (0);
}
