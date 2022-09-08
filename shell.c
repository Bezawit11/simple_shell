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
int h = 1, status;
char *buffer;
char **tokenz;
pid_t pid;
while (h == 1)
{
buffer = readcmd();
tokenz = parse_line(buffer);
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
}
return (1);
}
