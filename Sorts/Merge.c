#include <stdio.h>
#include <stdlib.h>

// https://www.geeksforgeeks.org/merge-sort/

void merge(int *array, int first, int middle, int last) {
    int i, j, k;
    int n1 = middle - first + 1;
    int n2 = last - middle;

    int left[n1], right[n2];

    for (i = 0; i < n1; i++)
        left[i] = array[first + i];

    for (j = 0; j < n2; j++)
        right[j] = array[middle + 1 + j];

    i = 0;
    j = 0;
    k = first;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        } else {
            array[k] = right[j];
            j++;
        }
    }
    
    while (i < n1)
    {
        array[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int *array, int first, int last) {
    if (first < last) {
        int middle = first + (last - first) / 2;

        mergeSort(array, first, middle);
        mergeSort(array, (middle + 1), last);

        merge(array, first, middle, last);
    }
}