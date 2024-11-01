#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../Lib/auxiliar.h"

int main() {
    
    int type = 0,size = 0, tests = 0;
    char *input = "", *output = "";


    type = 3;
    size = 20000;
    tests = 100;
    input = "../Arrays/random/20000.bin";
    output = "../Tests/20000.txt";

    test(type, size, tests, input, output, &bubbleBetter, "Bubble Sort Melhorado");
    printf("\n\n");
    test(type, size, tests, input, output, &bubbleWorse, "Bubble Sort Normal");
    printf("\n\n");
    test(type, size, tests, input, output, &heapSort, "Heap Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &insertionSort, "Insertion Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &fachada, "Merge Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &fachadaQuickLow, "Quick Sort (inicio)");
    printf("\n\n");
    test(type, size, tests, input, output, &fachadaQuickMid, "Quick Sort (meio)");
    printf("\n\n");
    test(type, size, tests, input, output, &selectionSort, "Selection Sort");
    printf("\n\n");
    test(type, size, tests, input, output, &shellSort, "Shell Sort");
}
