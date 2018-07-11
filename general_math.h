//
// Created by Annant Gupta on 11-Jul-18.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef TEST_GENERAL_MATH_H
#define TEST_GENERAL_MATH_H


#include <stdio.h>

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

int reverse_of_a_no(int number) { // To reverse a no   //Q-3
    //long int number;
//    printf("Enter the no  : ");
    //  scanf("%li", &number);
    long int rev = 0;
    while (number != 0) {
        rev = rev * 10 + number % 10;
        number = number / 10;
    }
    return rev;
    //printf("\n Reverse of %li  is :  %li", number, rev);

}

int prime_n() {  // Print Prime no between 1 and n    // EXTRA
    int i, j, n, flag;
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


long int fact_loop(long int n) { // factorial using loop   // Q-5
    long int fact = 1;
    for (int i = n; i >= 1; i--) {
        fact = fact * i;
    }
    return fact;
}


int factorial_rec(int n) { // factorial using recursion  //Q-6
    if (!n)
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


void greatest_common_divisor() {  // Greatest common divisor   //
    int no_1, no_2, GCD = 0;
    int greater_no;
    printf("Enter No 1 and No 2   : ");
    scanf("%d%d", &no_1, &no_2);
    greater_no = (no_1 > no_2) ? no_1 : no_2;
    for (int i = 2; i <= greater_no; i++) {
        if (no_1 % i == 0 && no_2 % i == 0) {
            GCD = i;
        }
    }
    printf("GCD  of %d and %d is : %d ", no_1, no_2, GCD);
}

void is_perfect_no() {
    // WAP to check perfect no
    int no, sum = 0;
    printf("Enter the no to check : ");
    scanf("%d", &no);

    for (int i = 1; i <= no / 2; i++) {
        if (no % i == 0) {
            sum = sum + i;
        }
    }
    if (sum == no) {
        printf("%d   : is a perfect no", no);
    } else {
        printf("%d   : is not a perfect no", no);
    }

}

void is_armstrong_no(int n) {
    // Program to check armstrong no;
    int sum = 0;
    //printf("Enter the no to check armstrong : ");
    //  scanf("%d", &n);
    int count = 0;
    int no = n;
    while (no != 0) {
        no = no / 10;
        count++;
    }
    no = n;
    for (int i = 1; i <= count; i++) {
        sum = sum + power(no % 10, count);
        no = no / 10;
    }
    if (sum == n) {
        printf("\n%d  : is an armstrong no", n);
    } else {
        printf("%d  : is not an armstrong no", n);
    }
}

void is_strong_no() {
// program to check weather a no is strong or not;
    for (int j = 1; j <= 100000; j++) {
        int no = j, n = j, sum = 0;
        while (n != 0) {
            sum = sum + factorial_rec(n % 10);
            n = n / 10;
        }
        if (sum == no) {
            printf("\n %d  is a strong no ", no);
        }
// } else {
//            printf(" %d   : is  not a strong no : ", no);
//        }
    }
}

void fibonacci_loop() {
    // Print fibonacci series
    int no = 10, prev = 0, crnt = 1, next = 0;
    printf("Enter Fibonacci series : ");
    scanf("%d", &no);
    for (int i = 0; i <= no; i++) {
        printf("%d ", next);
        prev = crnt;
        crnt = next;
        next = prev + crnt;
    }
}


int fibo(int n) { // fibonacci get term function
    if (n == 1 || n == 0) return n;
    return fibo(n - 2) + fibo(n - 1);
}

void fibonacci_rec() {
    // fibonacci using recursion
    int n;
    printf("Enter the range n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", fibo(i));
    }
}


#endif //TEST_GENERAL_MATH_H

#pragma clang diagnostic pop