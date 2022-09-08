#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 */
int main(void)

{
int h = 1, status, p;
char *buffer = NULL;
char **tokenz;
pid_t pid;
while (h == 1)
{
p = isatty(STDIN_FILENO);
buffer = readcmd(buffer);
tokenz = parse_line(buffer);
/*execute(tokenz);*/
pid = fork();
if (pid == 0)
{
if (execve(tokenz[0], tokenz, environ) == -1)
perror("Error");
exit(0);
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
return (1);
}
