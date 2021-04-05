//Kirk Watson - 47876885 - CS3353
#ifndef RADIX_SORT_IMPLEMENTATION_RADIXSORT_H
#define RADIX_SORT_IMPLEMENTATION_RADIXSORT_H

using namespace std;

//This class contains the Radix Sort algorithm.
//credit to geeksforgeeks.com for references
class RadixSort {
public:
    RadixSort();
    void sort(int*,int);
    void countingSort(int*,int, int);
    int getMax(int*,int);
};


#endif //RADIX_SORT_IMPLEMENTATION_RADIXSORT_H
