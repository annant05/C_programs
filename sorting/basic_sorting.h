
#ifndef BASIC_SORTING_H
#define BASIC_SORTING_H

int bubbleSort(int array[], int len) {

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


int selectionSort(int array[], int len) {

    for (int external = 0; external < len; external++) {
        int smallest_index = external;
//        run a loop to find the element that is smallest in unsorted list.
        for (int internal = external + 1; internal < len; internal++) {
            if (array[smallest_index] > array[internal]) {
                smallest_index = internal;
            }
        }
//        swap the element at smallest_index with the selected current index in external
        swap(&array[smallest_index], &array[external]);
    }
    return 0;
}


int insertionSort(int array[], int len) {

//    run a loop on unsorted array
    for (int unsorted = 1; unsorted < len; unsorted++) {
        int sorted = unsorted - 1;
        int cstore = array[unsorted];
        //        compare unsorted with sorted and
        while (sorted >= 0 && array[sorted] > cstore) {
            array[sorted + 1] = array[sorted];
            sorted--;
        }
        array[sorted + 1] = cstore;
    }

    return 0;
}

#endif
