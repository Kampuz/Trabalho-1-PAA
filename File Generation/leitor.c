#include <stdio.h>

#include "library.h"

int main() {

    int n = 1000;
    char *filename = "../Arrays/random/1000.bin";

    int *array = readArrayFromFile(n, filename);
    if (array == NULL)
    {
        return 1;
    }

    printArray(array, n);

    return 0;
}