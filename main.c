#include <stdio.h>

#include "auxiliar.h"

int main() {

    int n = 100000;
    char *filename = "Arrays/random/100000.bin";

    int *array = getArray(n, filename);

    printf("Unsorted Array: ");
    printArray(array, n);
    printf("\n");
    getchar();

    bubbleBetter(array, n);

    printf("Sorted Array: ");
    printArray(array, n);
    printf("\n");

    return 0;
}