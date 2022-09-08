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

char *readcmd(char *command);
int _strlen(char *s);
void for_env();
int check_builtin(char **tokenz);
int _strcmp(char *s1, char *s2);
char **parse_line(char *buffer);
int execute(char **token);
extern char **environ;
#endif
