#include <stdio.h>
#include <stdbool.h>

#include "../Lib/auxiliar.h"

void swap(int *left, int *right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

// https://www.geeksforgeeks.org/bubble-sort-algorithm/
void bubbleBetter(int array[], int n) {
    int i, j;
    bool swapped;

    for (i = 0; i < (n - 1); i++)
    {
        swapped = false;

        for (j = 0; j < (n - i - 1); j++)
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                swapped = true;
            }

        if (swapped == false)
            break;
    }
}

// Downgrad of the Bubble Better.
void bubbleWorse(int array[], int n) {
    int i, j;

    for (i = 0; i < (n - 1); i++)
        for (j = 0; j < (n - i - 1); j++)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
}

// https://www.geeksforgeeks.org/heap-sort/
void heapify(int array[], int n, int index) {
    int largest = index;
    int left = (2 * index + 1);
    int right = (2 * index + 2);

    if (left < n && array[left] > array[largest])
        largest = left;
    
    if (right < n && array[right] > array[largest])
        largest = right;

    if (largest != index)
    {
        swap(&array[index], &array[largest]);
        heapify(array, n, largest);
    }
}

void heapSort(int array[], int n) {
    for (int i = (n / 2 - 1); i >= 0; i--)
        heapify(array, n, i);

    for (int i = (n - 1); i > 0; i--)
    {
        swap(&array[0], &array[i]);
        heapify(array, i, 0);
    }
}

// https://www.geeksforgeeks.org/insertion-sort-algorithm/
void insertionSort(int array[], int n) {
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

// https://www.geeksforgeeks.org/merge-sort/
void merge(int array[], int first, int middle, int last) {
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
        if (left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        } else {
            array[k] = right[j];
            j++;
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

void mergeSort(int array[], int first, int last) {
    if (first < last) {
        int middle = first + (last - first) / 2;

        mergeSort(array, first, middle);
        mergeSort(array, (middle + 1), last);

        merge(array, first, middle, last);
    }
}

void fachada(int array[], int size) {
    mergeSort(array, 0, (size - 1));
}

// https://www.geeksforgeeks.org/selection-sort-algorithm-2/
void selectionSort(int array[], int n) {
    for (int i = 0; i < (n - 1); i++)
    {
        int min_index = i;

        for (int j = (i + 1); j < n; j++)
            if (array[j] < array[min_index])
                min_index = j;
        
        if (min_index != i)
            swap(&array[i], &array[min_index]);
    }
}

// https://www.geeksforgeeks.org/shell-sort/
void shellSort(int array[], int n) {
    for (int gap = (n / 2); gap > 0; gap /= 2)
        for (int i = gap; i < n; i += 1)
        {
            int temp = array[i];
            int j;

            for (j = i; ((j >= gap) && (array[j - gap] > temp)); j -= gap)
                array[j] = array[j - gap];
            
            array[j] = temp;
        }
}