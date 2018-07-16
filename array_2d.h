//
// Created by annant on 7/14/18.
//

#include <stdio.h>

#ifndef TEST_ARRAY_2D_H
#define TEST_ARRAY_2D_H
int r, c;

void mat_transpose(int matrix[r][c]) {
    int trans[r][c];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            trans[j][i] = matrix[i][j];
        }


    printf("transpose:  \n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

}

void call_trans() {
    printf("Enter no of rows and columns for Matrix 1 : ");
    scanf("%d%d", &r, &c);
    int mat[r][c];
    printf("Enter array elements :");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("array[%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("values in matrix:  \n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    mat_transpose(mat);
}

large_and_small_in_2d() {
    int r, c;
    printf("Enter no of rows and columns for Matrix 1 : ");
    scanf("%d%d", &r, &c);
    int mat[r][c];
    printf("Enter array elements :");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("array[%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("values in matrix 1:  \n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    int large = 0, small = 0;
    int largest = mat[0][0];
    int smallest = mat[0][0];
    for (int i = 0; i < r; ++i) {

        for (int j = 1; j < c; j++) {
            if (largest <= mat[i][j]) {
                largest = mat[i][j];
            }
            if (smallest >= mat[i][j]) {
                smallest = mat[i][j];
            }
        }
    }

    printf("Largest element in the array is  :%d ", largest);
    printf("\nsmallest element in the array is  :%d ", smallest);
}

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


void is_array_symmetric() {

    printf("Enter no of rows and columns for Matrix 1 : ");
    scanf("%d%d", &r, &c);
    int mat[r][c];
    printf("Enter array elements :");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("array[%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("values in matrix:  \n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    if (r == c) {
        int trans[r][c];
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j) {
                trans[j][i] = mat[i][j];
            }


        printf("transpose:  \n");
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                printf("%d ", trans[i][j]);
            }
            printf("\n");
        }

        int symmetric = TRUE;
        for (int k = 0; k < r; ++k) {
            for (int i = 0; i < c; ++i) {
                if (mat[k][i] != trans[k][i]) {
                    symmetric = FALSE;
                }
            }
        }
        if (symmetric) {
            printf("this is a symmetric matrix :  \n");
            for (int i = 0; i < r; ++i) {
                for (int j = 0; j < c; ++j) {
                    printf("%d ", mat[i][j]);
                }
                printf("\n");
            }
        } else {
            printf("this is not a symmetric matrix :  \n");
            for (int i = 0; i < r; ++i) {
                for (int j = 0; j < c; ++j) {
                    printf("%d ", mat[i][j]);
                }
                printf("\n");
            }
        }
    } else {
        printf("It is not a square matrix : %d x %d ", r, c);
    }

}




#endif //TEST_ARRAY_2D_H
