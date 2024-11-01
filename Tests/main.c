#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../Lib/auxiliar.h"

int main() {
    
    int type = 0,size = 0, tests = 0;
    char *input = "", *output = "";


    type = 3;
    size = 1000;
    tests = 100;
    input = "../Arrays/random/1000.bin";
    output = "1000.txt";

    test(type, size, tests, input, output, &bubbleBetter, "Bubble Sort Melhorado");
    printf("\n\n");
    test(type, size, tests, input, output, &bubbleWorse, "Bubble Sort Normal");
    printf("\n\n");
    test(type, size, tests, input, output, &heapSort, "Heap Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &insertionSort, "Insertion Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &mergeSort, "Merge Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &, "Quick Sort (inicio)");
    printf("\n\n");
    test(type, size, tests, input, output, &, "Quick Sort (meio)");
    printf("\n\n");
    test(type, size, tests, input, output, &selectionSort, "Selection Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &shellSort, "Shell Sort");
}
