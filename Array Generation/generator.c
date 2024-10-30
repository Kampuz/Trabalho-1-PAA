#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "library.h"

int main() {
    int one = 1000, five = 5000, ten = 10000, twenty = 20000, fifty = 50000, hundred = 100000;
    
    int *ordered = createArrayInOrder(one);
    int *inverse = createArrayInReverseOrder(one);
    int *random = createShuffledArray(one);
    writeArrayToFile(ordered, one, "../Arrays/natural/1000.bin");
    writeArrayToFile(inverse, one, "../Arrays/inverse/1000.bin");
    writeArrayToFile(random, one, "../Arrays/random/1000.bin");

    ordered = createArrayInOrder(five);
    inverse = createArrayInReverseOrder(five);
    random = createShuffledArray(five);
    writeArrayToFile(ordered, five, "../Arrays/natural/5000.bin");
    writeArrayToFile(inverse, five, "../Arrays/inverse/5000.bin");
    writeArrayToFile(random, five, "../Arrays/random/5000.bin");

    ordered = createArrayInOrder(ten);
    inverse = createArrayInReverseOrder(ten);
    random = createShuffledArray(ten);
    writeArrayToFile(ordered, ten, "../Arrays/natural/10000.bin");
    writeArrayToFile(inverse, ten, "../Arrays/inverse/10000.bin");
    writeArrayToFile(random, ten, "../Arrays/random/10000.bin");

    ordered = createArrayInOrder(twenty);
    inverse = createArrayInReverseOrder(twenty);
    random = createShuffledArray(twenty);
    writeArrayToFile(ordered, twenty, "../Arrays/natural/20000.bin");
    writeArrayToFile(inverse, twenty, "../Arrays/inverse/20000.bin");
    writeArrayToFile(random, twenty, "../Arrays/random/20000.bin");

    ordered = createArrayInOrder(fifty);
    inverse = createArrayInReverseOrder(fifty);
    random = createShuffledArray(fifty);
    writeArrayToFile(ordered, fifty, "../Arrays/natural/50000.bin");
    writeArrayToFile(inverse, fifty, "../Arrays/inverse/50000.bin");
    writeArrayToFile(random, fifty, "../Arrays/random/50000.bin");

    ordered = createArrayInOrder(hundred);
    inverse = createArrayInReverseOrder(hundred);
    random = createShuffledArray(hundred);
    writeArrayToFile(ordered, hundred, "../Arrays/natural/100000.bin");
    writeArrayToFile(inverse, hundred, "../Arrays/inverse/100000.bin");
    writeArrayToFile(random, hundred, "../Arrays/random/100000.bin");

    return 0;
}
