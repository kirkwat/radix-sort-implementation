//Kirk Watson - 47876885 - CS3353
#include "Launcher.h"

//default constructor
Launcher::Launcher(){
    radix=RadixSort();
}
//read file to get array
//arguments - input file
void Launcher::getArray(char* inputFile){
    ifstream file;
    cout<<"Reading "<<inputFile<<"..."<<endl;
    //open file
    file.open(inputFile);
    //check if it was opened properly
    if (!file.is_open()) {
        cout << "Could not open file "<<inputFile<<"." << endl;
        return;
    }
    //get number of elements in file
    file>>size;
    //create array
    array=new int[size];
    //fill array
    for(int x=0;x<size;x++){
        file>>array[x];
    }
    //close file
    file.close();
    cout<<"...Complete"<<endl;
}
//use radix sort to sort array
void Launcher::sortArray(){
    cout<<"Sorting Array with Radix Sort..."<<endl;
    radix.sort(array,size);
    cout<<"...Complete"<<endl;
}
//display contents of the array
void Launcher::printArray(){
    for(int x=0;x<size;x++){
        cout<<array[x]<<" ";
    }
    cout<<endl<<endl;
}