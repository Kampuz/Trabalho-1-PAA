#include <stdio.h>
#include <stdlib.h>

#include "../Lib/auxiliar.h"

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

double getAvarege(int firstIndex, int lastIndex, int array[]) {
    double avarage = 0.0;

    for (int i = firstIndex; i < lastIndex; i++)
    {
        avarage += array[i];
    }
    
    avarage /= (lastIndex - firstIndex);
    return avarage;
}

double getMedian(int firstIndex, int lastIndex, int array[]) {
    int middleIndex = (lastIndex - firstIndex) / 2;
    double median = 0.0;

    if (((lastIndex - firstIndex) % 2) == 0)
        median = ((array[firstIndex + middleIndex - 1] + array[firstIndex + middleIndex]) / 2);
    else
        median = array[firstIndex + middleIndex];

    return median;
}