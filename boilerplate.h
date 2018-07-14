//
// Created by Annant Gupta on 11-Jul-18.
//

#ifndef TEST_BOILERPLATE_H
#define TEST_BOILERPLATE_H

#include <stdio.h>

#define TRUE 1;
#define FALSE 0;


//Boiler plate code start

int input_n() {
    int ret;
    printf("Enter no of elements : ");
    scanf("%d", &ret);
    return ret;
}

void input_list(int list[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("Enter element no %d  : ", i + 1);
        scanf("%d", &list[i]);
    }
    printf("\n");
}

void display_list(int list[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d, ", list[i]);
    }
    printf("\n");
}

void swap(int *no1, int *no2) {
    int temp = *no1;
    *no1 = *no2;
    *no2 = temp;
}
// boiler plate code end

#endif //TEST_BOILERPLATE_H
