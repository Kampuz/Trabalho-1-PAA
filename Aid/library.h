#ifndef LIBRARY_
#define LIBRARY_

void swap(int *left, int *right);

void generateRandomArray(int vetor[], int n);
void printArray(int vetor[], int n);

void writeToFile(int vetor[], int n, char *filename);
void readFile(int vetor[], int n, char *filename);

#endif