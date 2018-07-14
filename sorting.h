//
// Created by Annant Gupta on 11-Jul-18.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef TEST_SORTING_H
#define TEST_SORTING_H


#include "boilerplate.h"


void larg_and_second_larg() {
    // Largest element in a given list : // Q - 82   // Second largest in a given list //Q-
    int n = input_n();
    int list[n];
    input_list(list, n);
    int largest = list[0];
    for (int i = 1; i < n; i++) {
        if (largest <= list[i]) {
            largest = list[i];
        }
    }
    int seclargest = -1;
    for (int i = 1; i < n; i++) {
        if (list[i] != largest && seclargest <= list[i]) {
            seclargest = list[i];
        }
    }

    display_list(list, n);
    printf("Largest element in the array is  :%d ", largest);
    printf("\nSecond Largest element in the array is  :%d ", seclargest);

}

void lar_and_small() {
    int n = input_n();
    int list[n];
    input_list(list, n);
    int largest = list[0];
    int smallest = list[0];
    for (int i = 1; i < n; i++) {
        if (largest <= list[i]) {
            largest = list[i];
        }
        if (smallest >= list[i]) {
            smallest = list[i];
        }
    }
    display_list(list, n);
    printf("Largest element in the array is  :%d ", largest);
    printf("\nsmallest element in the array is  :%d ", smallest);
}

void bubble_sort() {
    int n = input_n(), list[n];
    input_list(list, n);
    display_list(list, n);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (list[i] <= list[j]) {
                swap(&list[i], &list[j]);
            }
        }
    }
    display_list(list, n);
}


void selection_sort(int list[], int n) {
    // int n = input_n(), list[n];
    input_list(list, n);
    display_list(list, n);

    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (list[min] <= list[j]) {
                min = j;
            }
            swap(&list[min], &list[j]);
        }
    }
    display_list(list, n);
}

//void insertion_sort() {
//    int n = input_n(), list[n];
//    input_list(list, n);
//    display_list(list, n);
//
//
//
//    display_list(list, n);
//}


#endif //TEST_SORTING_H

#pragma clang diagnostic pop