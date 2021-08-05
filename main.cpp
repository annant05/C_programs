#include <iostream>
#include "sorting/basic_sorting.h"
#include "utils/array.h"

using namespace std;

int main() {
    int len = 8;
    int array[len] = {8, 6, 4, 20, 19, 2, 10, 12};
    cout << "Unsorted Array:\t ";
    print_array(array, len);

    //    execute sorting here
    selection_sort(array, len);

    cout << "Sorted Array:\t ";
    print_array(array, len);
    cout << endl;

    return 0;
}