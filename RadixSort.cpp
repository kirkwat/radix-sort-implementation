//Kirk Watson - 47876885 - CS3353
#include "RadixSort.h"

//default constructor
RadixSort::RadixSort(){}
//radix sort
//arguments - array, array size
void RadixSort::sort(int array[],int size){
    //get max value to determine highest number of digits
    int max = getMax(array, size);

    //counting sort subroutine for each digit/base
    //loop through each possible base
    for (int power = 1; (max/power)>0; power *= 10){
        countingSort(array, size, power);
    }
}
//counting sort subroutine
//arguments - array, array size, power for base
void RadixSort::countingSort(int array[], int size, int power){
    //sorted array
    int sorted[size];
    //counting array
    int count[10] = {0};
    //count key value occurrences
    for (int x = 0; x<size; x++){
        //get remainder of 10 for given base
        count[(array[x] / power) % 10]++;
    }
    //get positions of key values by sum of previous elements occurrences
    for (int x = 1; x < 10; x++){
        count[x] += count[x - 1];
    }
    //fill sorted array
    for (int x = size - 1; x >= 0; x--) {
        //sorted position is count array for unit matching main array element
        sorted[count[(array[x] / power) % 10] - 1] = array[x];
        //remove counter for main array element
        count[(array[x] / power) % 10]--;
    }
    //copy sorted array to main array
    for (int x = 0; x < size; x++){
        array[x] = sorted[x];
    }
}
//get max value of array
//arguments - array, array size
int RadixSort::getMax(int array[],int size){
    int max = array[0];
    //loop through array to find maximum value
    for (int x = 1; x < size; x++){
        if (array[x] > max){
            max = array[x];
        }
    }
    return max;
}