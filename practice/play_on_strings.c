#include <stdio.h>
#include "main.h"



/**
 *
 *  *_strcmp - compares a string
 *
 *   *@s1: character pointer
 *
 *    *@s2: character pointer
 *
 *     *Return: returns an integer
 *
 *      */

int _strcmp(char *s1, char *s2)



{

	int l = 0, i, r, a, b, j;

	for (j = 0; s1[j] != '\0'; j++)

	{

		l++;

	}

	for (i = 0; i < l; i++)

	{

		if (*(s1 + i) != *(s2 + i))

			break;

	}

	a = s1[i];

	b = s2[i];

	r = a - b;

	return (r);

}



/**
 *
 *  *
 *
 *   *
 *
 *    */

char *_strcpy(char *dest, char *src)



{

	int i = 0, l = 0;

	while (src[i] !='\0')

	{

		l++;

		i++;

	}

	for (i = 0; i < l; i++)

	{

		*(dest + i) = *(src + i);

	}

	return (dest);

}



/**
 *
 *  *
 *
 *   *
 *
 *    */

char *_strcat(char *src)



{

	int i = 0, l1 = 0, l2 = 0;

	char *e;

	while (src[i] != '\0')

	{

		l1++;

		i++;

	} 

	e = malloc(20);

	_strcpy(e, "/bin/");

	i = 0;

	while (e[i] != '\0')

	{

		l2++;

		i++;

	}   

	for (i = 0; i < l1; i++)

	{

		*(e + l2 + i) = *(src + i);

	}

	return (e);

}



/**
 *
 *  *_strncmp - compares two strings.
 *
 *   *@s1: first string
 *
 *    *@s2: second string
 *
 *     *@n: number of bytes to be compared
 *
 *      *Return: returns 0 on success, 1 for fail
 *
 *       */

int _strncmp(char *s1, char *s2, int n)



{

	int j;

	for (j = 0; j < n; j++)

	{

		if (*(s1 + j) != *(s2 + j))

			break;

	}

	if (j == n)

	{

		return (0);

	}

	else

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

int _strlen(char *s)



{

	int l = 0, i = 0;

	while (s[i] != '\0')

	{

		l++;

		i++;

	}

	return (l);

}
