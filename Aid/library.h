#ifndef LIBRARY_
#define LIBRARY_

void writeArrayToFile(int *array, int n, char *filename);
int *readArrayFromFile(int n, char *filename);
void printArray(int *array, int n);

int *createArrayInOrder(int n);
int *createArrayInReverseOrder(int n);
int *createShuffledArray(int n);

#endif