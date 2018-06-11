//
// Created by Annant Gupta on 6/11/2018.
//

#ifndef TEST_FUNCTIONSS_H
#define TEST_FUNCTIONSS_H

#endif //TEST_FUNCTIONSS_H

#include <stdio.h>

int prime_n() {
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

int print_it(char *array) {
    printf("%s", &array[0]);
    return 0;
}
