//
// Created by annant on 7/14/18.
//

#include <stdio.h>

#ifndef TEST_ARRAY_2D_H
#define TEST_ARRAY_2D_H


void aray_mul() {
    int r1, c1, r2, c2;

    printf("Enter no of rows and columns for Matrix 1 : ");
    scanf("%d%d", &r1, &c1);
    int mat1[r1][c1];
    printf("Enter array elements :");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            printf("array[%d][%d]", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("values in matrix 1:  \n");
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }


    printf("Enter no of rows and columns for Matrix 2 : ");
    scanf("%d%d", &r2, &c2);

    if (c1 == r2) {
        int mat2[r2][c2];
        printf("Enter array elements :");
        for (int i = 0; i < r2; ++i) {
            for (int j = 0; j < c2; ++j) {
                printf("array[%d][%d]", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }


        printf("values in matrix 2:  \n");
        for (int i = 0; i < r2; ++i) {
            for (int j = 0; j < c2; ++j) {
                printf("%d ", mat2[i][j]);
            }
            printf("\n");
        }


        int res[r1][c1];
        for (int i = 0; i < r1; ++i)
            for (int j = 0; j < c2; ++j) {
                res[i][j] = 0;
            }

        for (int i = 0; i < r1; ++i)
            for (int j = 0; j < c2; ++j)
                for (int k = 0; k < c1; ++k) {
                    res[i][j] += mat1[i][k] * mat2[k][j];
                }

        printf("result is  :  \n");
        for (int i = 0; i < r1; ++i) {
            for (int j = 0; j < c1; ++j) {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }

    } else printf("Matrix not compatible :");


}





#endif //TEST_ARRAY_2D_H
