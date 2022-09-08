#include <stdio.h>
#include "main.h"



/**
 *
 *  *
 *
 *   *
 *
 *    */

int _setenv(char *name, char *value, int overwrite)

	  

{

	int i = 0, l = 0, c;

	if (overwrite == 0)

		return (0);

	while (name[i] != '\0')

	{

		l++;

		i++;

	}

	for (i = 0; environ[i] != NULL; i++)

	{

		c = _strncmp(name, environ[i], l);

		if (c == 0)

			break;

	}

	if (environ[i] != NULL)

	{

		environ[i] = value;

	}

	/*i = 0;
	 *
	 * while (environ[i] != NULL)
	 *
	 * {
	 *
	 * printf("%s\n", environ[i]);
	 *
	 * i++;
	 *
	 * }*/

	return (1);

}



/**
 *
 *  *
 *
 *   *
 *
 *    *
 *
 *     */

int _unsetenv(char *name)



{

	int i = 0, l = 0, c;

	while (name[i] != '\0')

	{

		l++;

		i++;

	}

	for (i = 0; environ[i] != NULL; i++)

	{

		c = _strncmp(name, environ[i], l);

		if (c == 0)

			break;

	}

	if (environ[i] != NULL)

	{

		environ[i] = environ[i + 1];

	}

	/*i = 0;
	 *
	 * while (environ[i] != NULL)
	 *
	 * {
	 *
	 * printf("%s\n", environ[i]);
	 *
	 * i++;
	 *
	 * }*/

	return (0);

}
