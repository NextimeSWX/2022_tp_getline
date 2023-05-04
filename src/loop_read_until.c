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
    char *result;
    char *str1;
    char *str2;
    int size_read;
    int i;

    str1 = malloc(sizeof(char) * 17);
    size_read = read(fd, str1, 16);
    str1[size_read] = '\0';
    str2 = strdup(str1);
    while (size_read > 0) {
        i = 0;
        while (i < 16) {
            if (str1[i] == token) {
                return (str2);
            }
            i += 1;
        }
        size_read = read(fd, str1, 16);
        str1[size_read] = '\0';
        result = strdup(str2);
        str2 = strdupcat(result, str1);
        free(result);
    }
    free(str1);
    return (str2);
}
