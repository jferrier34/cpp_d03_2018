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

typedef struct s_string string_t;

struct s_string {
    char *str;
    void (*assign_s) (string_t *this, const string_t *str);
    void (*assign_c) (string_t *this, const char *s);
    void (*append_s) (string_t *this, const string_t *ap);
    void (*append_c) (string_t *this, const char *ap);
    char (*at) (const string_t *this, size_t pos);
    void (*clear) (string_t *this);
    int (*size) (const string_t *this);
    int (*compare_s) (const string_t *this, const string_t *str);
    int (*compare_c) (const string_t *this, const char *str);
    const char *(*c_str) (const string_t *this);
};



void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);
void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);
void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);
char at(const string_t *this, size_t pos);
void clear(string_t *this);
int size(const string_t *this);
int compare_s(const string_t *this, const string_t *str);
int compare_c(const string_t *this, const char *str);
const char *c_str(const string_t *this);

#endif
