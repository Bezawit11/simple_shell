#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 */
int main(void)

{
int h = 1;
char *buffer;
char **tokenz;
while (h == 1)
{
buffer = readcmd();
tokenz = parse_line(buffer);

free(buffer);
free(tokenz);
}
return (1);
}
