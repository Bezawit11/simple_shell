#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include "main.h"

/**
 *
 *  *main - our shell's main program
 *
 *   *Return: returns 1 on success
 *
 *    */

int main(int ac, char **argv)

{
int h = 1, status, i = 0, checker;
char *cmd, *cmdp, *buffer = NULL, **tokenz, *copy = malloc(50);
pid_t pid;
if (ac == 0)
return (1);
while (h == 1)
{
buffer = prompt(buffer);
if (*buffer == '\n')
continue;
while (buffer[i] != '\0')
{
copy[i] = buffer[i];
i++;
}
checker = get_builtin_func(copy)(copy);
if (checker == 1)
{
continue;
}
if (checker == 2)
break;
tokenz = parse_line(buffer);
cmd = strtok(buffer, " ");
cmdp = cmd;
if (*cmd != '/')
{
cmdp = _strcat(cmd);
}
pid = fork();
if (pid == 0)
{
if (execve(cmdp, tokenz, environ) == -1)
perror(argv[0]);
exit(0);

		}

		else if (pid < 0)

			perror(argv[0]);

		else

			wait(&status);

	}

	free(copy);

	free(buffer);

	return (1);

}
