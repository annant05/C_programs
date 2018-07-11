//
// Created by Annant Gupta on 11-Jul-18.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef TEST_DATA_STRUCTURE_H
#define TEST_DATA_STRUCTURE_H

#include <stdio.h>

// stack Start
int MAXSIZE;
int tos = -1;

void displayStack(int stack[]) {
    for (int i = 0; i <= tos; i++) {
        printf("%d, ", stack[i]);
    }
}

void push(int stack[]) {
    if (tos == MAXSIZE - 1) {
        printf("Cannot insert -> Stack is full\n");
    } else {
        tos++;
        printf("Insert Element  : ");
        scanf("%d", &stack[tos]);
    }
}


void pop(int stack[]) {
    if (tos == -1) {
        printf("Stack is empty\n");

    } else {
        printf("Element  %d : deleted\n", stack[tos]);
        tos--;
    }
}

void stack_reset(int stack[]) {
    for (int i = 0; i < MAXSIZE; i++) {
        stack[i] = 0;
    }
}

void stack_using_array() {
    //Stack using array
    printf("\nEnter the size of array : ");
    scanf("%d", &MAXSIZE);// &MAXSIZE = 10);
    int stack[MAXSIZE];
    stack_reset(stack);
    int ch = 1;
    while (ch) {
        displayStack(stack);
        printf("\n1: insert \t 2: delete \t 0: Exit   : ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push(stack);
                break;
            case 2:
                pop(stack);
                break;
            case 0:
                ch = 0;
                break;
            default:
                continue;
        }
    }
}
//Stack stop




#endif //TEST_DATA_STRUCTURE_H

#pragma clang diagnostic pop