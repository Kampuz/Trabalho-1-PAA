#include <stdio.h>

//https://www.geeksforgeeks.org/selection-sort-algorithm-2/

void swap(int *left, int *right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

void selectionSort(int *array, int n) {
    for (int i = 0; i < (n - 1); i++)
    {
        int min_index = i;

        for (int j = (i + 1); j < n; j++)
            if (array[j] < array[min_index])
                min_index = j;
        
        swap(&array[i], &array[min_index]);
    }
}