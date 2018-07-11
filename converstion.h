//
// Created by Annant Gupta on 11-Jul-18.
//

#ifndef TEST_CONVERSTION_H
#define TEST_CONVERSTION_H


#include <stdio.h>

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


#endif //TEST_CONVERSTION_H
