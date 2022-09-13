#include "main.h"
#include <unistd.h>

/**
 *for_env - prints environment variables
 *Return: void
 */
void for_env(void)

{
int i = 0, l;
while (environ[i] != NULL)
{
l = _strlen(environ[i]);
write(1, environ[i], l);
write(1, "\n", 1);
i++;
}
}
