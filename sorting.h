//
// Created by Annant Gupta on 11-Jul-18.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef TEST_SORTING_H
#define TEST_SORTING_H


#include "boilerplate.h"

int max(int list[], int n) {
    int largest = list[0];
    for (int i = 1; i < n; i++) {
        if (largest <= list[i]) {
            largest = list[i];
        }
    }
    return largest;
}

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


void selectionSort() {

    int n = input_n(), list[n];
    input_list(list, n);
    display_list(list, n);

    int i, j, min;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++)
            if (list[j] < list[min])
                min = j;
        swap(&list[min], &list[i]);
    }
    display_list(list, n);
}

void insertion_sort() {
    int n = input_n();
    int list[n];
    input_list(list, n);
    display_list(list, n);
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = list[i];
        j = i - 1;

        while (j >= 0 && list[j] > key) {
            list[j + 1] = list[j];
            j = j - 1;
        }
        list[j + 1] = key;
    }
    display_list(list, n);
}

void merge(int list[], int i1, int j1, int i2, int j2) {
    int temp[50];
    int i, j, k;
    i = i1;
    j = i2;
    k = 0;

    while (i <= j1 && j <= j2) {
        if (list[i] < list[j])
            temp[k++] = list[i++];
        else
            temp[k++] = list[j++];
    }

    while (i <= j1)
        temp[k++] = list[i++];

    while (j <= j2)
        temp[k++] = list[j++];

    //Transfer elements from temp[] back to list[]
    for (i = i1, j = 0; i <= j2; i++, j++)
        list[i] = temp[j];
}

void merge_sort(int list[], int i, int j) {
    int mid;
    if (i < j) {
        mid = (i + j) / 2;
        merge_sort(list, i, mid);
        merge_sort(list, mid + 1, j);
        merge(list, i, mid, mid + 1, j);
    }
}

void call_merge() {
    int n = input_n(), list[n];
    input_list(list, n);
    display_list(list, n);
    merge_sort(list, 0, n - 1);
    display_list(list, n);
}

#endif //TEST_SORTING_H

#pragma clang diagnostic pop