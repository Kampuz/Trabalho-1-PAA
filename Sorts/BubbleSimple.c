#include <stdio.h>

void swap(int *left, int *right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

// Downgrad of the Bubble Better.

void bubbleSimple(int *array, int n) {
    int i, j;

    for (i = 0; i < (n - 1); i++)
        for (j = 0; j < (n - i - 1); j++)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
}
