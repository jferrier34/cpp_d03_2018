/*
** EPITECH PROJECT, 2019
** file_b.c
** File description:
** file_b.c
*/

#include "string.h"

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

