/*
 * E89 Pedagogical & Technical Lab
 * project:     loop read until
 * created on:  2023-02-21 - 10:45 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: loop_read_until.c
 */

#include "stu.h"

char *loop_read_until(int fd, char token)
{
    char *str1;
    char *str2;
    int size_read;
    int i;

    str1 = malloc(sizeof(char) * 17);
    size_read = read(fd, str1, 16);
    str1[size_read] = '\0';
    str2 = strdup(str1);
    if (str1 == NULL)
        return (NULL);
    while (size_read > 0) {
        i = 0;
        while (i < 16 && str1[i] != '\0' && str1[i] != token) {
            i += 1;
        }
            if (str1[i] == token) {
                free(str1);
                return (str2);
            }
        size_read = read(fd, str1, 16);
        str1[size_read] = '\0';
        str2 = strdup(str2);
        str2 = strdupcat(str2, str1);
    }
    free(str1);
    return (str2);
}
