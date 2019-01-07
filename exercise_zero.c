/*
** EPITECH PROJECT, 2019
** exercise_zero.c
** File description:
** exercise_zero.c
*/

#include "string.h"

void string_init(string_t *this, const char *s)
{
    if (s) {
        this->str = strdup(s);
    }
}

void string_destroy(string_t *this)
{
    if (this && this->str) {
    free(this->str);
    this->str = NULL;
    }
}

void assign_s(string_t *this, const string_t *str)
{
    if (!this)
        return ;
    this->str = strdup(str->str);
}

void assign_c(string_t *this, const char *s)
{
    if (!s)
        return ;
    this->str = strdup(s);
}

void append_s (string_t *this, const string_t *ap)
{
    if (!ap)
        return;
    this->str = realloc(this->str, strlen(this->str) + strlen(ap->str) +1);
    this->str = strcat(this->str, ap->str);
}

void append_c (string_t *this, const char *ap)
{
    if (!ap)
        return;
    this->str = realloc(this->str, strlen(this->str) + strlen(ap) +1);
    this->str = strcat(this->str, ap);
}

char at(const string_t *this, size_t pos)
{
    if (!this) {
        return (-1);
    }
    if (pos > strlen(this->str) -1) {
        return (-1);
    }
    return (this->str[pos]);
}

void clear(string_t *this)
{
    char *tmp = this->str;
    this->str = NULL;
    free(tmp);
}

int size(const string_t *this)
{
    if (!this) {
        return (-1);
    }
    return (strlen(this->str));
}

int compare_s(const string_t *this, const string_t *str)
{
    if (this) {
        return (strcmp(this->str, str->str));
    }
    return (0);
}

int compare_c(const string_t *this, const char *str)
{
    if (this) {
        return (strcmp(this->str, str));
    }
    return (0);
}

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    char const *tmp;
    if (!this)
        return (-1);
    tmp = this->str + pos;
    s = malloc(n + 1);
    if (!s)
        return (-1);
    return (strncpy(s, tmp, n));
}

const char *c_str(const string_t *this)
{
    if (!this)
        return (NULL);
    return (this->str);
}

/*int empty(const string_t *this)
{
    if (!this)
        return (NULL);
    return (this->str);
}
*/


