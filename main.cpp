//Kirk Watson - 47876885 - CS3353
#include "Launcher.h"

using namespace std;

int main(int argc, char** argv) {
    //create launcher object
    Launcher example=Launcher();
    //read input file
    example.getArray(argv[1]);
    //display original array
    cout<<endl<<"Original array:"<<endl;
    example.printArray();
    //sort array
    example.sortArray();
    //display results
    cout<<endl<<"Sorted array:"<<endl;
    example.printArray();

    return 0;
}