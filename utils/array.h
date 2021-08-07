#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using namespace std;

int print_array(int array[], int len) {
    for (int index = 0; index < len; index++) {
        cout << array[index] << "\t";
    }
    cout << "\n";
    return 0;
}

int copyArray(int source[], int sourceLen, int dest[], int destLen) {

    int smallest_array = sourceLen < destLen ? sourceLen : destLen;

    for (int index = 0; index < smallest_array; index++) {
        dest[index] = source[index];
    }

    print_array(dest, destLen);

    return 0;
}

#endif
