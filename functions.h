//
// Created by Annant Gupta on 6/11/2018.
//

#ifndef TEST_FUNCTIONSS_H
#define TEST_FUNCTIONSS_H

#endif //TEST_FUNCTIONSS_H

#include <stdio.h>

int prime_n() {
    // Print Prime no between 1 and n
    int i, j, n, flag = 1;
    printf("Enter Value of n  : \t ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        flag = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) { flag = 1; }
        }
        if (!flag) {
            printf("\n %d   : is a Prime no ", i);
        }
    }
    return 0;
}

void reverse_string(char string[]) {
    // function to print reverse of a string.
    printf("Reverse of string is ");
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    int length = i;
    char reverse[length + 1];
    i = 0;
    while (string[i] != '\0') {
        reverse[length - i] = string[i];
        i++;
        if (i == length) {
            reverse[length + 1] = '\0';
        }
    }
    reverse[0] = ' ';
    printf(reverse);
}