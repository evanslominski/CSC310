#include <iostream>
#include <fstream>
#include "sorting.h"
#include "customErrorClass.h"

using namespace std;

C_Numbers::C_Numbers() {
    this->p_dataArray = NULL;
    this->p_arraySize = 0;
}

C_Numbers::~C_Numbers() {
    delete[] this->p_dataArray;
}

void C_Numbers::initArray() {

    if( NULL != this->p_dataArray ) {
        throw MyException("WARNING: Array already initialized, skipping");
    } else if (0 > p_arraySize) {
        throw MyException("WARNING: Value is negative, cannot create array");
    } else {
        this->p_initArray();
    }
}

void C_Numbers::putDataInArray() {
    if ( NULL == this->p_dataArray ) {
        throw MyException("WARNING: The array has not been initialized");

    } else {
        this->p_putDataInArray();
    }
} 

void C_Numbers::sortArray() {
    if( NULL == this->p_dataArray ) {
        throw MyException("WARNING: The array has not been initialized");
    } else {
        this->p_sortArray();
    }
}

void C_Numbers:: printArray() {

     if( NULL == this->p_dataArray) {
        throw MyException("ERROR: Array is empty");
    } else {
        this->p_printArray();
    }
}

void C_Numbers::p_initArray() {
    int index = 0;
    
    ifstream data;
    data.open("input.dat");
    data >> p_arraySize;
    data.close();

    this->p_dataArray = new int[this->p_arraySize];

    for(index=0; index < this->p_arraySize; index++) {
        this->p_dataArray[index] = index;
    }
}

void C_Numbers:: p_putDataInArray() {
    int throwAway = 0, index = 0;

    ifstream data;
    data.open("input.dat");
    data >> throwAway;

    for(index=0; index<p_arraySize; index++) {
        
    data >> p_dataArray[index];
        
    }
    data.close();
}

void C_Numbers:: p_sortArray() {
    int index = 0, index2=0;

    cout<<endl<<"Sorted Array Below:"<<endl;

    //sort the dataArray
    for(index=0; index < p_arraySize-1; index++) {

        for(index2=0; index2 < p_arraySize-index-1; index2++) {
            
            if( p_dataArray[index2] > p_dataArray[index2+1]) {
                int tmp=0;

                tmp = p_dataArray[index2];
                p_dataArray[index2] = p_dataArray[index2+1];
                p_dataArray[index2+1] = tmp;
            }
        }
    }
}

void C_Numbers:: p_printArray() {

    int index = 0;

    for(index = 0; index < this->p_arraySize; index++) {
        cout<<index<<this->p_dataArray[index]<<" ";
    }
    cout<<endl;
}