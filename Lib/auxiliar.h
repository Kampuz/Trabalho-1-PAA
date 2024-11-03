#ifndef AUXILIAR_
#define AUXILIAR_

int *getArray(int n, char *filePath);
void printArray(int array[], int n);

double getAvarege(int firstIndex, int lastIndex, double array[]);
double getMedian(int firstIndex, int lastIndex, double array[]);


void test(int type, int size, int tests, char *filename, char *filepath, void (*ptr)(int array[], int size), char *functionName);
void every(int type, int size, int tests, char *input, char *output);

void printToFile(double average, double median, int size, int tests, int type, char *functionName, char *filepath);

// https://www.geeksforgeeks.org/bubble-sort-algorithm/
void bubbleBetter(int array[], int n);
// Downgrad of the Bubble Better.
void bubbleWorse(int array[], int n);

// https://www.geeksforgeeks.org/heap-sort/
void heapSort(int array[], int n);

// https://www.geeksforgeeks.org/insertion-sort-algorithm/
void insertionSort(int array[], int n);

// https://www.geeksforgeeks.org/merge-sort/
void mergeSort(int array[], int first, int last);
void fachada(int array[], int size);

// https://www.geeksforgeeks.org/selection-sort-algorithm-2/
void selectionSort(int array[], int n);

// https://www.geeksforgeeks.org/shell-sort/
void shellSort(int array[], int n);

int partitionLow(int array[], int low, int high);
void quickSortLow(int array[], int low, int high);


int partitionMid(int array[], int low, int high);
void quickSortMid(int array[], int low, int high);

void fachadaQuickMid(int array[], int size);
void fachadaQuickLow(int array[], int size);

#endif