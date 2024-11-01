#ifndef AUXILIAR_
#define AUXILIAR_

int *getArray(int n, char *filePath);
void printArray(int array[], int n);
double getAvarege(int firstIndex, int lastIndex, int array[]);
double getMedian(int firstIndex, int lastIndex, int array[]);

// https://www.geeksforgeeks.org/bubble-sort-algorithm/
void bubbleBetter(int array[], int n);
// Downgrad of the Bubble Better.
void bubbleWorse(double array[], int n);

// https://www.geeksforgeeks.org/heap-sort/
void heapSort(int array[], int n);

// https://www.geeksforgeeks.org/insertion-sort-algorithm/
void insertionSort(int array[], int n);

// https://www.geeksforgeeks.org/merge-sort/
void mergeSort(int array[], int first, int last);

// https://www.geeksforgeeks.org/selection-sort-algorithm-2/
void selectionSort(int array[], int n);

// https://www.geeksforgeeks.org/shell-sort/
void shellSort(int array[], int n);

#endif