#include <stdio.h>
#include "main.h"

/**
 *
 *  *
 *
 *   *
 *
 *    */

int (*get_builtin_func(char *s))(char *s)



{

	cmd_l cd[] = {

		{"cd", for_cd},

		{"unsetenv", for_unsetenv},

		{"setenv", for_setenv},

		{"alias", for_alias},

		{"env", for_env},

		{"echo", for_echo},

		{"exit", for_exit},

		{NULL, NULL}

	};

	int i = 0, k, l;

	char *c, *h;

	l = _strlen(s);

	c = malloc(l + 1);

	/*printf("%s", s);*/

	h = malloc(l + 1);

	while (s[i] != '\0')

	{

		h[i] = s[i];

		i++;

	}

	c = strtok(h, " ");

	for (i = 0; i <= 6; i++)

	{

		k = _strcmp(cd[i].cmd, c);

		if (k == 0)

		{

			/*free(c);
			 *
			 * free(h);*/

			return (cd[i].f);

		}

	}

	return (for_not_builtin);

}
