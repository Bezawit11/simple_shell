#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>

#include <sys/stat.h>

#include <signal.h>



typedef struct cl

{

	    char *cmd;

	        int (*f)(char *s);

} cmd_l;



char *_strcat(char *src);

size_t _getline(char **string, size_t *n);

char *_strtok(char *str, const char *delim);

char *_strcpy(char *dest, char *src);

char *exec(char *cmd);

char **parse_line(char *buffer);

char *prompt(char *buffer);

int _strcmp(char *s1, char *s2);

int _setenv(char *name, char *value, int overwrite);

int _strncmp(char *s1, char *s2, int n);

int _strlen(char *s);

int _unsetenv(char *name);

int for_cd(char *s);

int for_unsetenv(char *s);

int for_setenv(char *s);

int for_alias(char *s);

int for_env(char *s);

int for_echo(char *s);

int for_exit();

int for_not_builtin(char *s);

int (*get_builtin_func(char *s))(char *s);



extern char **environ;

#endif

