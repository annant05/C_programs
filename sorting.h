//
// Created by Annant Gupta on 11-Jul-18.
//

#ifndef TEST_SORTING_H
#define TEST_SORTING_H


#include <stdio.h>

void larg_and_second_larg() {
    // Largest element in a given list : // Q - 82   // Second largest in a given list //Q-
    int n;
    printf("Enter no of elements  : ");
    scanf("%d", &n);
    int list[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element  %d : ", i + 1);
        scanf("%d", &list[i]);
    }
    int largest = list[0];
    for (int i = 1; i < n; i++) {
        if (largest <= list[i]) {
            largest = list[i];
        }
    }
    int seclargest = 0;
    for (int i = 1; i < n; i++) {
        if (list[i] != largest && seclargest <= list[i]) {
            seclargest = list[i];
        }
    }

    printf("Largest element in the array is  :%d ", largest);
    printf("\nSecond Largest element in the array is  :%d ", seclargest);

}

#endif //TEST_SORTING_H
