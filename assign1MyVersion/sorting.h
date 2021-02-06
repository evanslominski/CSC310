#ifndef SORTING
#define SORTING

#include <iostream>
#include <fstream>
#include "customErrorClass.h"

using namespace std;

class C_Numbers{
    public:
        
        C_Numbers();
        ~C_Numbers();
        void initArray();
        void putDataInArray(); 
        void printArray();
        void sortArray();

    private:
        int *p_dataArray;
        int p_arraySize;

        void p_initArray();
        void p_putDataInArray();        
        void p_printArray();
        void p_sortArray();
};
#endif