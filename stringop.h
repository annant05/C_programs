//
// Created by Annant Gupta on 11-Jul-18.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef TEST_STRINGOP_H
#define TEST_STRINGOP_H

#include <stdio.h>

#define TRUE 1;
#define FALSE 0;

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

void reverse_string_using_swap() {
    // Special thanks to Aadarsh Sharma for this logic of swapping two ends of the string     //Q-1

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

void is_string_palindrome() { //  given string is palindrome or not  // Q-2
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

// concat Start
char conc[100];

char *concate(char *str1, char *str2) {
    int slen(char *str) { // NOLINT
        int len = 0;
        while (str[len] != '\0') {
            len++;
        }
        return len;
    }
    int len1 = slen(str1), len2 = slen(str2);
    printf("\nString 1 len : %d", len1);
    printf("\nString 2 len : %d", len2);

    for (int i = 0; i <= len1 + len2; ++i) {
        if (i < len1) conc[i] = str1[i];
        else conc[i] = str2[i - len1];
    }
    return conc;
}

void string_conc_main() {
    char str1[20];
    char str2[20];
    char *strcat;
    //int len = 0;
    printf("\nEnter String 1 : ");
    gets(str1);
    printf("\nEnter String 2 : ");
    gets(str2);
    strcat = concate(str1, str2);
    printf("\nconcate String is :%s", strcat);
}
//concat End

//concat short and simple

void strcatt() {
    char s1[100], s2[100], i, j;

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

// calculate the length of string s1
// and store it in i
    for (i = 0; s1[i] != '\0'; ++i);

    for (j = 0; s2[j] != '\0'; ++j, ++i) {
        s1[i] = s2[j];
    }

    s1[i] = '\0';   ////Important line
    printf("After concatenation: %s", s1);

}

//concat end ;


//change string case


void strupr() {
    char string[100];
    printf("Enter the string   : ");
    gets(string);

    for (int i = 0; string[i] != '\0'; ++i) {
        if (string[i] >= 97 && string[i] <= 122)
            string[i] = (char) (string[i] - 32);
    }

    printf("String in upper case is :  %s", string);
}

void strlow() {
    char string[100];
    printf("Enter the string   : ");
    gets(string);

    for (int i = 0; string[i] != '\0'; ++i) {
        if (string[i] >= 65 && string[i] <= 90)
            string[i] = (char) (string[i] + 32);
    }

    printf("String in lower case is :  %s", string);
}

void strchangecase() {
    char string[100];
    printf("Enter the string   : ");
    gets(string);

    for (int i = 0; string[i] != '\0'; ++i) {
        if (string[i] >= 65 && string[i] <= 90)
            string[i] = (char) (string[i] + 32);
        else if (string[i] >= 97 && string[i] <= 122)
            string[i] = (char) (string[i] - 32);
    }

    printf("String in changed case is :  %s", string);
}

// change string case end

//string revese once again ;
void strrev() {
    char string[100];
    int len;
    printf("Enter the string to reverse  : ");
    gets(string);
    for (len = 0; string[len] != '\0'; len++);
    for (int i = 0; i < len / 2; ++i) {
        char temp = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = temp;
    }
    printf("Reverse of the string is  :  %s", string);
}


int slen_ptr(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}


int str_len(char *str) {
    int len = 0;
    while (*str != '\0') {
        str++;
        len++;
    }
    return len;
}

void copy_string(char *str, char *copy) {
    while (*str) {
        *copy = *str;
        str++;
        copy++;
    }
    *copy = '\0';
}


void str_cmp(char *str1, char *str2) {
    char *s1 = str1;
    char *s2 = str2;
//    int len1 = str_len(str1), len2 = str_len(str2);
    int diff = 0;
    for (int i = 0; *str1 != '\0' || *str2 != '\0'; ++i) {
        diff = diff + (*str1 - *str2);
        str1++;
        str2++;
    }
    if (!diff) {
        printf("Strings %s and %s are identical :%d", s1, s2, diff);
    } else {
        printf("Strings %s and %s are not identical :%d", s1, s2, diff);
    }
}

void str_sort(char *str) {
    printf("%s:%d", str, str_len(str));
    int len = str_len(str);
    char s1[len];
    char *s2 = str;
    for (int i = 0; i < len; ++i) {
        s1[i] = *s2++;
    }
    s1[len] = '\0';
    for (int i = 0; i < len; ++i) {
        for (int j = i + 1; j < len; ++j) {
            if (s1[i] >= s1[j]) {
                swap_c(&s1[i], &s1[j]);
            }
        }
    }
    printf("\n%s:%d", s1, str_len(s1));
}


#endif //TEST_STRINGOP_H

#pragma clang diagnostic pop