#include <stdio.h>
#include <stdbool.h>

void swap(int *left, int *right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

// https://www.geeksforgeeks.org/bubble-sort-algorithm/

void bubbleBetter(int *array, int n) {
    int i, j;
    bool swapped;

    for (i = 0; i < (n - 1); i++)
    {
        swapped = false;

        for (j = 0; j < (n - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }
}
