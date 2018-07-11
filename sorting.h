//
// Created by Annant Gupta on 11-Jul-18.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef TEST_SORTING_H
#define TEST_SORTING_H


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

void larg_and_second_larg() {
    // Largest element in a given list : // Q - 82   // Second largest in a given list //Q-
    int n = input_n();
    int list[n];
//    for (int i = 0; i < n; i++) {
//        printf("Enter element  %d : ", i + 1);
//        scanf("%d", &list[i]);
//    }
    input_list(list, n);

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

    display_list(list, n);
    printf("Largest element in the array is  :%d ", largest);
    printf("\nSecond Largest element in the array is  :%d ", seclargest);

}


void bubble_sort() {
    int n = input_n(), list[n];
    input_list(list, n);
    display_list(list, n);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (list[i] >= list[j]) {
                swap(&list[i], &list[j]);
            }
        }
    }
    display_list(list, n);
}

void insertion_sort() {
    int n = input_n(), list[n];
    input_list(list, n);
    display_list(list, n);



    display_list(list, n);
}

#endif //TEST_SORTING_H

#pragma clang diagnostic pop