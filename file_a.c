/*
** EPITECH PROJECT, 2019
** file_a.c
** File description:
** file_a.c
*/

#include "string.h"

void string_init(string_t *this, const char *s)
{
    if (!this || !s)
        return;
    this->str = strdup(s);
    this->assign_s = &assign_s;
    this->assign_c = &assign_c;
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->at = &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_s = &compare_s;
    this->compare_c = &compare_c;
    this->c_str = &c_str;
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
