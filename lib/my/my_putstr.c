/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** my_putstr
*/
#include "../my.h"

void my_putchar(char c);

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}