/*
** EPITECH PROJECT, 2019
** file_c.c
** File description:
** file_c.c
*/

#include "string.h"

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

/*size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    char const *tmp;
    if (!this)
        return (-1);
    tmp = this->str + pos;
    s = malloc(n + 1);
    if (!s)
        return (-1);
    return (strncpy(s, tmp, n));
    }*/

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


