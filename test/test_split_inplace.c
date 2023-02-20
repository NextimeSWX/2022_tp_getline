/*
 * E89 Pedagogical & Technical Lab
 * project:     Split inplace
 * created on:  2023-02-20 - 09:51 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_split_inplace.c
 */

#include "stu.h"

Test(split_inplace, normal) {
    char token;

    token = 'u';
    char liste[7] = {'f', 'l', 'e', 'u', 'r', 's','\0'};
    cr_assert_eq(&split_inplace(liste, token)[0], &liste[4]);
}
