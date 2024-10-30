#include <stdio.h>
#include <stdlib.h>

#include "auxiliar.h"

int *getArray(int n, char *filePath) {
    FILE *file = fopen(filePath, "rb");
    if (file == NULL)
    {
        fprintf(stderr, "Nao foi possivel abrir o arquivo\n");
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

int compare(const void *a, const void *b) {
    if (*(double*)a < *(double*)b) return -1;
    else if (*(double*)a > *(double*)b) return 1;
    else return 0;
}