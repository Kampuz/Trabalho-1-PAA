#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../Lib/auxiliar.h"

int main() {
    
    int type = 0,size = 0, tests = 100;
    char *input = "", *output = "";

    type = 2;
    size = 5;
    input = "../Arrays/inverse/5.bin";
    output = "../Tests/inverse/5.txt";

    every(type, size, tests, input, output);

    size = 10;
    input = "../Arrays/inverse/10.bin";
    output = "../Tests/inverse/10.txt";

    every(type, size, tests, input, output);

    size = 20;
    input = "../Arrays/inverse/20.bin";
    output = "../Tests/inverse/20.txt";

    every(type, size, tests, input, output);

    size = 50;
    input = "../Arrays/inverse/50.bin";
    output = "../Tests/inverse/50.txt";

    every(type, size, tests, input, output);

    size = 100;
    input = "../Arrays/inverse/100.bin";
    output = "../Tests/inverse/100.txt";

    every(type, size, tests, input, output);

    size = 1000;
    input = "../Arrays/inverse/1000.bin";
    output = "../Tests/inverse/1000.txt";

    every(type, size, tests, input, output);

    size = 5000;
    input = "../Arrays/inverse/5000.bin";
    output = "../Tests/inverse/5000.txt";

    every(type, size, tests, input, output);

    size = 10000;
    input = "../Arrays/inverse/10000.bin";
    output = "../Tests/inverse/10000.txt";

    every(type, size, tests, input, output);

    size = 20000;
    input = "../Arrays/inverse/20000.bin";
    output = "../Tests/inverse/20000.txt";

    every(type, size, tests, input, output);

    size = 50000;
    input = "../Arrays/inverse/50000.bin";
    output = "../Tests/inverse/50000.txt";

    every(type, size, tests, input, output);

    size = 100000;
    input = "../Arrays/inverse/100000.bin";
    output = "../Tests/inverse/100000.txt";

    every(type, size, tests, input, output);

}
