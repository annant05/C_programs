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

#endif
