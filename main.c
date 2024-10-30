#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../Lib/auxiliar.h"

int main() {
    int n = 5000;
    int num = 100;
    
    double time[num];
    
    double average = 0.0;
    double median = 0.0;

    char *filename = "Arrays/random/5000.bin";
    int *array = getArray(n, filename);

    for (int i = 0; i < num; i++) {
        // Allocate and copy `randomArray` into `sortedArray` for each iteration
        int *newArray = malloc(n * sizeof(int));
        if (newArray == NULL) {
            perror("Failed to allocate memory for sortedArray");
            free(array);
            return 1;
        }

        // Copy contents of `randomArray` into `sortedArray`
        for (int j = 0; j < n; j++) {
            newArray[j] = array[j];
        }

        clock_t start = clock();
        bubbleBetter(newArray, n);  // Sort the copied array
        clock_t end = clock();

        time[i] = ((double)(end - start)) / CLOCKS_PER_SEC;
        free(newArray);  // Free the copied array after sorting
    }

    bubbleSimple(time, num);

    int startIndex = (int)(num *0.05);
    int endIndex = (int)(num*0.95);
    int mid = (endIndex - startIndex) / 2;

    // Pegar m'edia
    for (int k = startIndex; k < endIndex ; k++)
        average += time[k];
    average /= (endIndex - startIndex);

    // Pegar mediana
    if (((endIndex - startIndex) % 2) == 0)
        median = ((time[startIndex + mid - 1] + time[startIndex + mid]) / 2);
    else
        median = time[startIndex + mid];

    printf("Teste feito %d vezes, utilizando um array de %d elementos desordenados.\n", num, n);
    // printf("Teste feito %d vezes, utilizando um array de %d elementos ordenados.\n", num, n);
    // printf("Teste feito %d vezes, utilizando um array de %d elementos ordenados inversamente.\n", num, n);
    printf("Average time: %.6f seconds\n", average);
    printf("Median  time: %.6f seconds\n", median);

    free(array);  // Free the original array

    return 0;
}
