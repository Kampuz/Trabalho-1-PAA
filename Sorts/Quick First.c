#include <stdio.h>

#include "../Aid/library.h"


void swap (int *left, int *right) {
    int aux = *left;
    *left = *right;
    *right = aux;
}

int partition(int vetor[], int low, int high) {
    int pivot = vetor[low];
    int i = (low + 1), j;

    for (j = low + 1; j <= high; j++)
    {
        if (vetor[j] < pivot)
        {
            swap(&vetor[i], &vetor[j]);
            i++;
        }
    }

    swap(&vetor[low], &vetor[i - 1]);
    return (i - 1);
}

void quickSort(int vetor[], int low, int high) {
    if (low < high)
    {
        int pi = partition(vetor, low, high);

        quickSort(vetor, low, (pi - 1));
        quickSort(vetor, (pi + 1), high);
    }
}

int main() {
    int n;
    int *vetor = gerarVetor(&n);

    printf("Unsorted Array: ");
    printVetor(vetor, n);
    printf("\n");

    quickSort(vetor, 0, (n - 1));

    printf("Sorted array: ");
    printVetor(vetor, n);
    printf("\n");
    
    return 0;
}