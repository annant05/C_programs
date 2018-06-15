//
// Created by Annant Gupta on 6/11/2018.
//

#ifndef TEST_FUNCTIONS_H
#define TEST_FUNCTIONS_H

#endif //TEST_FUNCTIONS_H


#include <stdio.h>

#define TRUE 1;
#define FALSE 0;

int prime_n() {  // Print Prime no between 1 and n
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


long int fact_loop(long int n) { // factorial using loop
    long int fact = 1;
    for (int i = n; i >= 1; i--) {
        fact = fact * i;
    }
    return fact;
}


long int factorial_rec(long int n) { // factorial using recursion
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

void reverse_string_using_swap() {  // Special thanks to Aadarsh Sharma for this logic

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

void is_palindrome() { //  given string is palindrome or not
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


void reverse_of_a_no() { // To reverse a no
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


