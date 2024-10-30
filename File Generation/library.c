#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../Lib/library.h"


void writeArrayToFile(int *array, int n, char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL)
    {
        fprintf(stderr, "Could not open file\n");
        return;
    }

    fwrite(array, sizeof(int), n, file);
    fclose(file);
    printf("Array sucessfully written to %s\n", filename);
}

int *readArrayFromFile(int n, char *filename) {
    FILE *file = fopen(filename, "rb");
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

void printArray(int *array, int n) {
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}




int *createArrayInOrder(int n) {
    int *array = (int*)malloc(n * sizeof(int));

    if (array == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    for (int i = 0; i < n; i++)
    {
        array[i] = i + 1;
    }

    return array;
}

int *createArrayInReverseOrder(int n) {
    int *array = (int*)malloc(n * sizeof(int));
    if (array == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    for (int i = 0; i < n; i++)
    {
        array[i] = n - i;
    }

    return array;
}

int *createShuffledArray(int n) {
    int *array = createArrayInOrder(n);
    if (array == NULL)
    {
        return NULL;
    }

    srand(time(NULL));

    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    return array;
}