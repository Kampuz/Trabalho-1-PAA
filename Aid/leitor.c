#include <stdio.h>

#include "library.h"

int main() {

    int n1 = 1000, n2 = 5000, n3 = 10000, n4 = 15000, n5 = 20000, n6 = 25000;
    int vetor1[n1], vetor2[n2], vetor3[n3], vetor4[n4], vetor5[n5], vetor6[n6];
    char *file1 = "1000.bin", *file2 = "5000.bin", *file3 = "10000.bin", *file4 = "15000.bin", *file5 = "20000.bin", *file6 = "25000.bin";

    readFile(vetor1, n1, file1);
    readFile(vetor2, n2, file2);
    readFile(vetor3, n3, file3);
    readFile(vetor4, n4, file4);
    readFile(vetor5, n5, file5);
    readFile(vetor6, n6, file6);

    printArray(vetor6, n6);

    return 0;
}