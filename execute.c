#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
char **environ;

/**
 *
 *
 *
 */
int execute(char **tokenz)

{
int status;
pid_t pid;
pid = fork();
if (pid == 0)
{
if (execve(tokenz[0], tokenz, environ) == -1)
{
perror("Error");
exit(0);
}
else if (pid < 0)
perror("Error");
else
wait(&status);
}
return (1);
}
