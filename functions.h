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

void reverse_string(const char string[]) { // function to print reverse of a string.
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


void larg_and_second_larg() {
    // Largest element in a given list : // Q - 82   // Second largest in a given list //Q-
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

void binary_to_decimal() {
    // convert binary to decimal
    int binary;
    printf("Enter the binary ");
    scanf("%d", &binary);
    int n = binary;
    int decimal = 0;
    int i = 0;
    while (n != 0) {
        decimal = decimal + (n % 10) * power(2, i);
        i++;
        n = n / 10;
    }

    printf("binary : %d   \n decimal : %d", binary, decimal);
}


void decimal_to_binary() {
    //  convert decimal to binary
    int binary[15];
    int no = 0;
    printf("Enter decimal no : ");
    scanf("%d", &no);
    int i = 0;
    while (no != 0) {
        binary[i] = no % 2 ? 1 : 0;
//        if (no % 2 == 0) {
//            binary[i] = 0;
//        } else {
//            binary[i] = 1;
//        }
        no = no / 2;
        i++;
    }
    printf("binary is : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

void decimal_to_octal() {
    //  convert decimal to octal
    int octal[15];
    int no = 0;
    printf("Enter decimal no : ");
    scanf("%d", &no);
    int i = 0;
    while (no != 0) {
        octal[i] = no % 8 ? no % 8 : 0;
        no = no / 8;
        i++;
    }
    printf("octal is : ");
    for (int j = i - 1; j >= 0; j--) printf("%d", octal[j]);
}

void octal_to_decimal() {
    //  convert octal to decimal
    int octal;
    int decimal = 0;
    printf("Enter octal no : ");
    scanf("%d", &octal);
    int n = octal;
    int i = 0;
    while (n != 0) {
        decimal = decimal + n % 10 * power(8, i);
        n = n / 10;
        i++;
    }
    printf("decimal is : ");
    printf("%d", decimal);
}

void decimal_to_hexadecimal() {
    //  convert decimal to hexadecimal
    char hexadecimal[15];
    int no = 0;
    printf("Enter decimal no : ");
    scanf("%d", &no);
    int i = 0;
    while (no != 0) {
        int temp = no % 16 ?  /* true expression */ no % 16 :   /* false expression*/  0;
        // above line means that if no%16==0 then return 0 otherwise return remainder
        hexadecimal[i] = (char) (temp <= 10 ? (48 + temp) : (55 + temp));//very important
        // above line if temp is less than 9 then return from no 0 to 9
        // otherwise if temp is greater than 9 then return from alphabets A to F
        no = no / 16;
        i++;
    }
    printf("hexadecimal is : ");
    for (int j = i - 1; j >= 0; j--) printf("%c", hexadecimal[j]);
}


void hexadecimal_to_decimal() {
    //  convert hexadecimal to decimal
    char hexadecimal[20];
    int decimal = 0;
    printf("Enter hexadecimal no : ");
    gets(hexadecimal);
    int length = 0;
    while (hexadecimal[length] != '\0') { length++; }

    int expo = 0;
    for (int i = length - 1; i >= 0; i--) {
        int temp = hexadecimal[i];
        printf("\n%d", temp);

        if (temp >= 65) {
            decimal = decimal + (temp - 55) * power(16, expo);
        } else {
            decimal = decimal + (temp - 48) * power(16, expo);
        }
        expo++;
    }

    printf("decimal is : ");
    printf("%d", decimal);
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


#pragma clang diagnostic pop