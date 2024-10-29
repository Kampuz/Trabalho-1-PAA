#include <stdio.h>

void swap(int *left, int *right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

void heapify(int *array, int n, int index) {
    int largest = index;
    int left = (2 * index + 1);
    int right = (2 * index + 2);

    if (left < n && array[left] > array[largest])
    {
        largest = left;
    }
    
    if (right < n && array[right] > array[largest])
    {
        largest = right;
    }

    if (largest != index)
    {
        swap(&array[index], &array[largest]);

        heapify(array, n, largest);
    }
}

void heapSort(int *array, int n) {
    for (int i = (n / 2 - 1); i >= 0; i--)
    {
        heapify(array, n, i);
    }

    for (int i = (n - 1); i > 0; i--)
    {
        swap(&array[0], &array[i]);

        heapify(array, i, 0);
    }
}