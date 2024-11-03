#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../Lib/auxiliar.h"

int compare(const void *a, const void* b) {
    return (*(double*)a - *(double*)b);
}

int *getArray(int n, char *filePath) {
    FILE *file = fopen(filePath, "rb");
    if (file == NULL)
    {
        perror("Error opening file to read.\n");
        return NULL;
    }

    int *array = (int*)malloc(n*sizeof(int));
    if (array == NULL)
    {
        fprintf(stderr, "Falha na alocacao de memoria\n");
        fclose(file);
        return NULL;
    }

    fread(array, sizeof(int), n, file);
    
    fclose(file);
    return array;
}

void printArray(int array[], int n) {
    
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);

    printf("\n");
}

double getAvarege(int firstIndex, int lastIndex, double array[]) {
    double avarage = 0.0;

    for (int i = firstIndex; i < lastIndex; i++)
    {
        avarage += array[i];
    }
    
    avarage /= (lastIndex - firstIndex);
    return avarage;
}

double getMedian(int firstIndex, int lastIndex, double array[]) {
    int middleIndex = (lastIndex - firstIndex) / 2;
    double median = 0.0;

    if (((lastIndex - firstIndex) % 2) == 0)
        median = ((array[firstIndex + middleIndex - 1] + array[firstIndex + middleIndex]) / 2);
    else
        median = array[firstIndex + middleIndex];

    return median;
}

void printToFile(double average, double median, int size, int tests, int type, char *functionName, char *filepath) {
    FILE *file = fopen(filepath, "a");
    if (file == NULL)
    {
        perror("Error opening file to print.\n");
        return;
    }

    fprintf(file, "Função utilizada: %s\n", functionName);

    switch (type)
    {
    case 1:
        fprintf(file, "Teste feito %d vezes, utilizando um array de %d elementos ordenados (1...n).\n", tests, size);
        break;
    case 2:
        fprintf(file, "Teste feito %d vezes, utilizando um array de %d elementos ordenados inversamente (n...1).\n", tests, size);
        break;
    case 3:
        fprintf(file, "Teste feito %d vezes, utilizando um array de %d elementos desordenados.\n", tests, size);
        break;
    default:
        fprintf(file, "ERRO");
        break;
    }

    fprintf(file, "Avarage time: %.6f seconds\n", average);
    fprintf(file, "Median time: %.6f seconds\n\n\n", median);

    fclose(file);
}

void test(int type, int size, int tests, char *filename, char *filepath, void (*ptr)(int array[], int size), char *functionName) {
    double times[tests];

    double average = 0.0, median = 0.0;

    int *array = getArray(size, filename);

    for (int i = 0; i < tests; i++)
    {
        int *newArray = malloc(size * sizeof(int));
        if (newArray == NULL)
        {
            perror("Failed to allocate memory for newArray.\n");
            free(array);
            return;
        }

        for (int j = 0; j < size; j++)
            newArray[j] = array[j];

        clock_t start = clock();
        (*ptr)(newArray, size);
        clock_t end = clock();

        times[i] = ((double)(end - start)) / CLOCKS_PER_SEC;

        printf("%.6f ", times[i]);
        free(newArray);
    }

    qsort(times, tests, sizeof(double), compare);

    int startIndex = 0;
    int endIndex = tests;

    average = getAvarege(startIndex, endIndex, times);
    median = getMedian(startIndex, endIndex, times);

    printToFile(average, median, size, tests, type, functionName, filepath);

    free(array);
    return;
}

void every(int type, int size, int tests, char *input, char *output) {
    test(type, size, tests, input, output, &bubbleBetter, "Bubble Sort Melhorado");
    printf("\n\n");
    test(type, size, tests, input, output, &bubbleWorse, "Bubble Sort Normal");
    printf("\n\n");
    test(type, size, tests, input, output, &heapSort, "Heap Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &insertionSort, "Insertion Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &fachada, "Merge Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &fachadaQuickLow, "Quick Sort (inicio)");
    printf("\n\n");
    test(type, size, tests, input, output, &fachadaQuickMid, "Quick Sort (meio)");
    printf("\n\n");
    test(type, size, tests, input, output, &selectionSort, "Selection Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &shellSort, "Shell Sort");
}