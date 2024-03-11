/*
** EPITECH PROJECT, 2024
** testJenkinsProgram
** File description:
** program
*/

#include <stdio.h>
#include <string.h>

void my_function(char *str, char *str2)
{
    if (strcmp(str, str2) == 0) {
        puts("Wow these two strings are identical, exciting !");
    } else {
        puts("Wow these strings are perfectly different, ye !");
    }
}

int main(int argc, char **argv)
{
    if (argc != 2) {
        puts("Bad number of arguments, not good");
        return 84;
    }
    my_function(argv[1], argv[2]);
    return 0;
}