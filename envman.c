#include "main.h"
#include <unistd.h>
char **environ;

/**
 *for_env - prints environment variables
 *Return: void
 */
void for_env()

{
int i, l;
i = 0;
while (environ[i] != NULL)
{
l = _strlen(environ[i]);
write(1, environ[i], l);
write(1, "\n", 1);
i++;
}
}
