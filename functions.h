//
// Created by Annant Gupta on 6/11/2018.
//

#ifndef TEST_FUNCTIONS_H
#define TEST_FUNCTIONS_H

#endif //TEST_FUNCTIONS_H


#include <stdio.h>

#define TRUE 1;
#define FALSE 0;

int prime_n() {  // Print Prime no between 1 and n    // EXTRA
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

void reverse_string(char string[]) { // function to print reverse of a string.
    printf("Reverse of string is ");
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    int length = i;
    char reverse[length + 1];
    i = 0;
    while (string[i] != '\0') {
        reverse[length - i] = string[i];
        i++;
        if (i == length) {
            reverse[length + 1] = '\0';
        }
    }
    reverse[0] = ' ';
    printf(reverse);
}


long int fact_loop(long int n) { // factorial using loop   // Q-5
    long int fact = 1;
    for (int i = n; i >= 1; i--) {
        fact = fact * i;
    }
    return fact;
}


long int factorial_rec(long int n) { // factorial using recursion  //Q-6
    if (n == 0)
        return 1;
    else
        return (n * factorial_rec(n - 1));
}

void is_prime(int n) { // is the no prime
    int flag = 0;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
        }
    }
    if (!flag) { printf("%d   : Is a Prime No", n); }
    else { printf("%d   : Is not a Prime No", n); }
}

void
reverse_string_using_swap() {  // Special thanks to Aadarsh Sharma for this logic of swapping two ends of the string     //Q-1

    char string[20];
    printf("Reverse of a string \n");
    printf("Please enter the string  : ");
    gets(string);
    int len = 0;
    while (string[len] != '\0') { len++; }
    len--;
    for (int i = 0; i <= len / 2; i++) {
        char temp = string[len - i];
        string[len - i] = string[i];
        string[i] = temp;

    }
    printf("String is :  %s", string);
}

void is_palindrome() { //  given string is palindrome or not  // Q-2
    char string[20];
    printf("Enter a string :  ");
    gets(string);
    int len = 0;
    while (string[len] != '\0') { len++; }
    len--;
    int palindrome = TRUE;
    for (int i = 0; i <= len / 2; i++) {
        if (string[i] != string[len - i]) {
            palindrome = FALSE;
            break;
        }
    }
    if (palindrome) {
        printf("%s   : is a palindrome ", string);
    } else {
        printf("%s   : is not a palindrome ", string);
    }
}


void reverse_of_a_no() { // To reverse a no   //Q-3
    long int number;
    printf("Enter the no  : ");
    scanf("%li", &number);
    long int rev = 0;
    while (number != 0) {
        rev = rev * 10 + number % 10;
        number = number / 10;
    }
    printf("\n Reverse of %li  is :  %li", number, rev);
}

int power(int number, int exponent) {   // TO find power of a number using recursion   //Q-12
    if (exponent == 0) {
        return 1;
    } else {
        return number * power(number, exponent - 1);
    }
}

void swap_without_temp() {     // to swap two numbers without using temp variable   //Q-16
    int no1, no2;
    printf("Enter no 1 and no 2  : ");
    scanf("%d%d", &no1, &no2);
    printf("no before swapping : no1 = %d  :  no2 = %d\n", no1, no2);
    no1 = no1 + no2;
    no2 = no1 - no2;
    no1 = no1 - no2;
    printf("no after swapping  : no1 = %d  :  no2 = %d\n", no1, no2);
}


void student_division() {  // Print student Division according to marks  // Q-30
    int marks;
    printf("Enter the marks of the student :  ");
    scanf("%d", &marks);
    if (marks >= 60) printf("Student PASSED with FIRST Division  Marks : %d", marks);
    else if (marks >= 50 && marks < 60) printf("Student PASSED with SECOND Division  Marks : %d", marks);
    else if (marks >= 40 && marks < 50) printf("Student PASSED with THIRD Division  Marks : %d", marks);
    else if (marks < 40) printf("Student has FAILED!  Marks : %d", marks);
}

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


void largest_and_second_largest_in_list() {     // Largest element in a given list : // Q - 82   // Second largest in a given list //Q-
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