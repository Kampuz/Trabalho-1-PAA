#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "library.h"

int main() {
    int FIVE = 5, TEN = 10, TWENTY = 20, FIFTY = 50, HUNDRED = 100;
    int one = 1000, five = 5000, ten = 10000, twenty = 20000, fifty = 50000, hundred = 100000;
    
    int *ordered = createArrayInOrder(5);
    int *inverse = createArrayInReverseOrder(5);
    int *random = createShuffledArray(5);
    writeArrayToFile(ordered, 5, "../Arrays/natural/5.bin");
    writeArrayToFile(inverse, 5, "../Arrays/inverse/5.bin");
    writeArrayToFile(random, 5, "../Arrays/random/5.bin");

    ordered = createArrayInOrder(10);
    inverse = createArrayInReverseOrder(10);
    random = createShuffledArray(10);
    writeArrayToFile(ordered, 10, "../Arrays/natural/10.bin");
    writeArrayToFile(inverse, 10, "../Arrays/inverse/10.bin");
    writeArrayToFile(random, 10, "../Arrays/random/10.bin");

    ordered = createArrayInOrder(20);
    inverse = createArrayInReverseOrder(20);
    random = createShuffledArray(20);
    writeArrayToFile(ordered, 20, "../Arrays/natural/20.bin");
    writeArrayToFile(inverse, 20, "../Arrays/inverse/20.bin");
    writeArrayToFile(random, 20, "../Arrays/random/20.bin");

    ordered = createArrayInOrder(50);
    inverse = createArrayInReverseOrder(50);
    random = createShuffledArray(50);
    writeArrayToFile(ordered, 50, "../Arrays/natural/50.bin");
    writeArrayToFile(inverse, 50, "../Arrays/inverse/50.bin");
    writeArrayToFile(random, 50, "../Arrays/random/50.bin");

    ordered = createArrayInOrder(100);
    inverse = createArrayInReverseOrder(100);
    random = createShuffledArray(100);
    writeArrayToFile(ordered, 100, "../Arrays/natural/100.bin");
    writeArrayToFile(inverse, 100, "../Arrays/inverse/100.bin");
    writeArrayToFile(random, 100, "../Arrays/random/100.bin");

    ordered = createArrayInOrder(1000);
    inverse = createArrayInReverseOrder(1000);
    random = createShuffledArray(1000);
    writeArrayToFile(ordered, 1000, "../Arrays/natural/1000.bin");
    writeArrayToFile(inverse, 1000, "../Arrays/inverse/1000.bin");
    writeArrayToFile(random, 1000, "../Arrays/random/1000.bin");


    ordered = createArrayInOrder(5000);
    inverse = createArrayInReverseOrder(5000);
    random = createShuffledArray(5000);
    writeArrayToFile(ordered, 5000, "../Arrays/natural/5000.bin");
    writeArrayToFile(inverse, 5000, "../Arrays/inverse/5000.bin");
    writeArrayToFile(random, 5000, "../Arrays/random/5000.bin");

    ordered = createArrayInOrder(10000);
    inverse = createArrayInReverseOrder(10000);
    random = createShuffledArray(10000);
    writeArrayToFile(ordered, 10000, "../Arrays/natural/10000.bin");
    writeArrayToFile(inverse, 10000, "../Arrays/inverse/10000.bin");
    writeArrayToFile(random, 10000, "../Arrays/random/10000.bin");

    ordered = createArrayInOrder(20000);
    inverse = createArrayInReverseOrder(20000);
    random = createShuffledArray(20000);
    writeArrayToFile(ordered, 20000, "../Arrays/natural/20000.bin");
    writeArrayToFile(inverse, 20000, "../Arrays/inverse/20000.bin");
    writeArrayToFile(random, 20000, "../Arrays/random/20000.bin");

    ordered = createArrayInOrder(50000);
    inverse = createArrayInReverseOrder(50000);
    random = createShuffledArray(50000);
    writeArrayToFile(ordered, 50000, "../Arrays/natural/50000.bin");
    writeArrayToFile(inverse, 50000, "../Arrays/inverse/50000.bin");
    writeArrayToFile(random, 50000, "../Arrays/random/50000.bin");

    ordered = createArrayInOrder(100000);
    inverse = createArrayInReverseOrder(100000);
    random = createShuffledArray(100000);
    writeArrayToFile(ordered, 100000, "../Arrays/natural/100000.bin");
    writeArrayToFile(inverse, 100000, "../Arrays/inverse/100000.bin");
    writeArrayToFile(random, 100000, "../Arrays/random/100000.bin");

    return 0;
}
