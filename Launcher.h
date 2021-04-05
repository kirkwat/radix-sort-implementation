//Kirk Watson - 47876885 - CS3353
#ifndef RADIX_SORT_IMPLEMENTATION_LAUNCHER_H
#define RADIX_SORT_IMPLEMENTATION_LAUNCHER_H

#include <iostream>
#include <fstream>
#include "RadixSort.h"

using namespace std;

//This class is the launcher of the program which controls the functionality
//of the array creation and sorting algorithm.
class Launcher {
private:
    RadixSort radix;
    int* array;
    int size;

public:
    Launcher();
    void getArray(char*);
    void sortArray();
    void printArray();

};


#endif //RADIX_SORT_IMPLEMENTATION_LAUNCHER_H
