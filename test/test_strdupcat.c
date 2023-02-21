/*
 * E89 Pedagogical & Technical Lab
 * project:     strdupcat
 * created on:  2023-02-20 - 16:49 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_strdupcat.c
 */

#include "stu.h"

Test(strdupcat, normal) {
    char *str = strdupcat("hello", " world");
    cr_assert_str_eq(str, "hello world");
    free(str);
}
Test(strdupcat, nbr) {
char *str = strdupcat("851", " ");
cr_assert_str_eq(str, "851 ");
free(str);
}
