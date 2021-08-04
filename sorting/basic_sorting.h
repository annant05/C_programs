#ifndef BASIC_SORTING_H
#define BASIC_SORTING_H

int bubble_sort(int *array, int len)
{

    for (int external = 0; external < len; external++)
    {
        for (int internal = external + 1; internal < len; internal++)
        {
            if (array[external] > array[internal])
            {
                int temp = array[external];
                array[external] = array[internal];
                array[internal] = temp;
            }
        }
    }

    return 0;
}

int insetion_sort()
{
    return 0;
}

#endif
