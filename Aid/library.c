#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "library.h"

void swap(int *left, int *right) {
    int aux = *left;
    *left = *right;
    *right = aux;
}

void shuffle(int vetor[], int n) {
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);

        swap(&vetor[i], &vetor[j]);
    }
}

void generateRandomArray(int vetor[], int n) {
    
    for (int i = 0; i < n; i++)
    {
        vetor[i] = i + 1;
    }

    shuffle(vetor, n);
    
    
    /*
    for (int i = 0; i < n; i++)
        vetor[i] = i + 1;
    */
    /*
    for (int i = 0; i < n; i++)
        vetor[i] = n - i;
    */
}

void printArray(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void writeToFile(int vetor[], int n, char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL)
    {
        perror("Erro ao abrir o arquivo\n");
        exit(EXIT_FAILURE);
    }
    
    fwrite(vetor, sizeof(int), n, file);

    fclose(file);
}

void readFile(int vetor[], int n, char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    fread(vetor, sizeof(int), n, file);

    fclose(file);
}