
#ifndef BASIC_SORTING_H
#define BASIC_SORTING_H


int bubble_sort(int array[], int len) {

    for (int external = 0; external < len; external++) {
        for (int internal = external + 1; internal < len; internal++) {
            if (array[external] > array[internal]) {
                int temp = array[external];
                array[external] = array[internal];
                array[internal] = temp;
            }
        }
    }

    return 0;
}

int swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    return 0;
}


int selection_sort(int array[], int len) {

    for (int external = 0; external < len; external++) {
        int smallest_index = external;
        for (int internal = external + 1; internal < len; internal++) {
            if (array[smallest_index] > array[internal]) {
                smallest_index = internal;
            }
        }
        swap(&array[smallest_index], &array[external]);
    }
    return 0;
}

#endif
