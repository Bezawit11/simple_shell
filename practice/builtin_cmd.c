#include <stdio.h>

#include <string.h>

#include <unistd.h>

#include <stdlib.h>

#include "main.h"

extern char **environ;



/**
 *
 *  *
 *
 *   *
 *
 *    */

int for_cd(char *s)

	 

{

	/*char array[100];*/

	s = strtok(NULL, " ");

	if (s == NULL)

	{

		chdir("/root");

		/*printf("%s\n", getcwd(array, 100));*/

		return(1);

	}

	/*printf("%s\n", getcwd(array, 100));*/

	if (chdir(s) != 0)

	{

		perror("Error");

	}

	chdir(s);

	/*printf("%s\n", getcwd(array, 100));*/

	return (1);

}



/**
 *
 *  *
 *
 *   *
 *
 *    */

int for_unsetenv(char *s)

	  

{

	char *p;

	int i = 0, l;

	l = _strlen(s);

	p = malloc(l + 1);

	while (s[i] != '\0')

	{

		p[i] = s[i];

		i++;

	}

	p = strtok(p, " ");

	p = strtok(NULL, " ");

	_unsetenv(p);

	return (1);

}



/**
 *
 *  *
 *
 *   */

int for_setenv(char *s)

	  

{

	char *p, *v;

	int i = 0, l;

	l = _strlen(s);

	p = malloc(l + 1);

	v = malloc(l + 1);

	while (s[i] != '\0')

	{

		p[i] = s[i];

		i++;

	}

	p = strtok(p, " ");

	p = strtok(NULL, " ");

	v = strtok(NULL, " ");

	_setenv(p, v, 1);

	return (1);

}



/**
 *
 *  *
 *
 *   *
 *
 *    */

int for_alias(char *s)



{

	s = strtok(s, " ");

	printf("prints alias");

	return (1);

}



/**
 *
 *  *
 *
 *   *
 *
 *    */

int for_echo(char *s)



{

	int l;

	s = strtok(s, " ");

	s = strtok(NULL, " ");

	l = _strlen(s);

	write(1, s, l);

	write(1, "\n", 1);

	return (1);

}



/**
 *
 *  *
 *
 *   *
 *
 *    */

int for_env(char *s)

	  

{

	int i, l = 0;

	s = strtok(s, " ");

	i = 0;

	while (environ[i] != NULL)

	{

		l = strlen(environ[i]);

		write(1, environ[i], l);

		write(1, "\n", 1);

		i++;

	}

	return (1);

}



/**
 *
 *  *
 *
 *   *
 *
 *    */

int for_not_builtin(char *s)



{

	s = strtok(s, " ");

	return (0);

}

/**
 *
 *  *
 *
 *   *
 *
 *    */

int for_exit(__attribute__((unused))char *s)



{

	/*s = strtok(s, " ");*/

	return (2);

}

