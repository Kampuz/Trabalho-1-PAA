#include <stdio.h>

// https://www.geeksforgeeks.org/insertion-sort-algorithm/

void insertionSor(int *array, int n) {
    for (int i = 1; i < n; ++i)
    {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}