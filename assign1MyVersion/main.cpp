#include <iostream>
#include <fstream>
#include "sorting.h"
#include "customErrorClass.h"

using namespace std;

int main(int argc, char *argv[]){

    C_Numbers sortingClass;

    try {
        int index = 0;
        int arraySize = 0;
        
        sortingClass.initArray();
        sortingClass.putDataInArray();
        sortingClass.sortArray();
        sortingClass.printArray();

    } catch (MyException &e) {

        cout<<e.what()<<endl;

    }


    return 0;
}