//
// Created by Annant Gupta on 11-Jul-18.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef TEST_SEARCHING_H
#define TEST_SEARCHING_H


#include <stdio.h>

#define TRUE 1;
#define FALSE 0;

void linear_search_using_loop() { // linear search using loop // Q-19
    int noOfElements, search;
    printf("Enter no of elements : ");
    scanf("%d", &noOfElements);
    int elements[noOfElements];
    printf("Enter elements in array  ");
    for (int i = 0; i < noOfElements; i++) {
        printf("Enter element  %d:  ", i + 1);
        scanf("%d", &elements[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d", &search);
    int found = FALSE;
    for (int i = 0; i < noOfElements; i++) {
        if (search == elements[i]) {
            printf("Search element %d found at position : %d ", search, i + 1);
            found = TRUE;
            break;
        }
    }
    if (!found) {
        printf("Search element %d is not in the list ", search);
    }

}

int binary_rec(int l, int r, int list[], int item) {
    int mid = (l + r) / 2;
    if (list[mid] == item) {
        return mid + 1;
    } else if (list[mid] < item) {
        binary_rec(mid + 1, r, list, item);
    } else if (list[mid] > item) {
        binary_rec(l, mid - 1, list, item);
    } else {
        return 0;
    }
}

int binary_search() {
    int n = input_n(), list[n];
    selection_sort(list, n);
    printf("the list is : \n");
    display_list(list, n);
    int item;
    printf("enter element to search :");
    scanf("%d", &item);

    //printf("%d", binary_rec(0, n, list, item));
    int L = 0, R = n - 1, mid = 0;
    while (L <= R) {
        mid = (L + R / 2);
        if (list[mid] == item) {
            printf("Item Found at %d  ", mid + 1);
            return mid + 1;
        }
        if (list[mid] < item) {
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }
    return 0;

}


void call() {
    int n = input_n(), list[n];
    selection_sort(list, n);
    printf("the list is : \n");
    display_list(list, n);
    int item;
    printf("enter element to search :");
    scanf("%d", &item);

    printf("element found at : %d", binary_rec(0, n, list, item));

}

int lin_rec(int list[], int item, int n) {
    if (list[n] == item) {
        return n + 1;
    } else if (n > 0) {
        lin_rec(list, item, n - 1);
    } else {
        return 0;
    }
}

void lin_call() {
    int n = input_n(), list[n];
    input_list(list, n);
//    selection_sort(list, n);
    printf("the list is : \n");
    display_list(list, n);
    int item;
    printf("enter element to search :");
    scanf("%d", &item);

    printf(" element found at: %d  ", lin_rec(list, item, n));

}

#endif //TEST_SEARCHING_H

#pragma clang diagnostic pop