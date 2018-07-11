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


#endif //TEST_SEARCHING_H

#pragma clang diagnostic pop