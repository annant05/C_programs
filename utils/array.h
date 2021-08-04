#ifndef ARRAY_H
#define ARRAY_H

int print_array(int array[], int len)
{
    for (int index = 0; index < len; index++)
    {
        cout << array[index] << "\n";
    }
    return 0;
}

#endif
