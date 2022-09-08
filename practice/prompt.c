#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *
 *  *prompt - a function that displays prompt and gets input from stdin
 *   *@buffer: string input from stdin
 *    *Return: returns string read from command line
 *     */
char *prompt(char *buffer)

{

	int i, l = 0, p = 1;

	size_t bufsize = 0;

	p = isatty(STDIN_FILENO);

	if (p == 1)

	{

		write(1, " ($) ", 5);

	}

	getline(&buffer, &bufsize, stdin);

	/*_getline(&buffer, &bufsize);*/

	if (*buffer == '\n')

		return (buffer);

	for (i = 0; buffer[i] != '\0'; i++)

	{

		l++;

	}

	l = l - 1;

	if (buffer[l] == '\n' || buffer[l] == EOF)

	{

		*(buffer + l) = '\0';

	}

	return (buffer);

}
