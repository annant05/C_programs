//
// Created by Annant Gupta on 6/11/2018.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef TEST_FUNCTIONS_H
#define TEST_FUNCTIONS_H

#endif //TEST_FUNCTIONS_H


#include <stdio.h>

#define TRUE 1;
#define FALSE 0;


void student_division() {  // Print student Division according to marks  // Q-30
    int marks;
    printf("Enter the marks of the student :  ");
    scanf("%d", &marks);
    if (marks >= 60) printf("Student PASSED with FIRST Division  Marks : %d", marks);
    else if (marks >= 50 && marks < 60) printf("Student PASSED with SECOND Division  Marks : %d", marks);
    else if (marks >= 40 && marks < 50) printf("Student PASSED with THIRD Division  Marks : %d", marks);
    else if (marks < 40) printf("Student has FAILED!  Marks : %d", marks);
}

int print_1_n(int n) {  // not yet completed   // Q-97

    if (n == 1) {
        printf("\n%d", 1);
        return 1;
    } else {
        printf("\n%d", n);
        print_1_n(n - 1);
    }

};

void print_hello_without_semicolon_92() {
    if (printf("Hello World")) { ;
    }
}






void is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year ", year);
    } else { printf("%d is not a leap year ", year); }


}


#pragma clang diagnostic pop