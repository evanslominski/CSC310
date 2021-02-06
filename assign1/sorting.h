#ifndef SORTING
#define SORTING

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class C_Numbers{
    public:
        
        C_Numbers();
        ~C_Numbers();
        void readFile(char[100]);
        void printArray();
        void sortArray();

    private:
        int *p_numArray;
        int p_arraySize;

        void p_readFile(char[100]);
        //not using^^
        void p_initArray();
        void p_putDataInArray();        
        void p_printArray();
        void p_sortArray();
};
#endif