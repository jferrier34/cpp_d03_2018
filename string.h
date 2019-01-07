/*
** EPITECH PROJECT, 2019
** string.h
** File description:
** string.h
*/

#ifndef STRING_H
#define STRING_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_string {
    char *str;
} string_t;

void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);
//void append_s(string_t *this, const string_t *ap);
void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);

#endif
