#include <iostream>
#include <sorting/basic_sorting.h>
#include <utils/array.h>

using namespace std;

int main()
{
    int len = 10;
    int array[len] = {
        32,
        39,
        3,
        2,
        22,
        12,
        20,
        65,
        44,
        13,
    };

    bubble_sort(&array, len);

    print_array(array, len);

    cout << endl;

    return 0;
}