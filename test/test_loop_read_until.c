/*
 * E89 Pedagogical & Technical Lab
 * project:     loop_read_until
 * created on:  2023-02-20 - 16:49 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_loop_read_until.c
 */

#include "stu.h"

Test(loop_read_until, normal) {
    char *str;
    int fd;

    fd = open("text.txt", O_RDONLY);
    str = loop_read_until(fd, 'y');
    cr_assert_str_eq(str, "bonjour je m'appelle evan ?How are you?ttttttttt");
    free(str);
}
