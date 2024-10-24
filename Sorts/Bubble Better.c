#include <stdio.h>
#include <stdbool.h>

#include "../Aid/library.h"

void bubbleSort(int vetor[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < (n - 1); i++)
    {
        swapped = false;

        for (j = 0; j < (n - i - 1); j++)
            if (vetor[j] > vetor[j + 1])
            {
                swap(&vetor[j], &vetor[j + 1]);
                swapped = true;
            }

        if (swapped == false)
            break;
    }
}

int main() {
    int n;
    int *vetor = gerarVetor(&n);

    printf("Unsorted Array: ");
    printVetor(vetor, n);
    printf("\n");

    quickSort(vetor, n);

    printf("Sorted array: ");
    printVetor(vetor, n);
    printf("\n");
    
    return 0;
}