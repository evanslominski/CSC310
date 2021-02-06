#include <iostream>
#include "unionFind.h"
#include "customErrorClass.h"

C_unionFind::C_unionFind() {
    this->p_dataArray = NULL;
    this->p_arraySize = 0;
}

C_unionFind::~C_unionFind() {
    delete[] this->p_dataArray;
}

void C_unionFind::initArray(int arraySize) {

    if( NULL != this->p_dataArray ) {
        //throw an exception
        //throw MyException("WARNING: Array already initialized, skipping");
    } else if (0 > arraySize) {
            throw MyException("WARNING: Value is negative, cannot create array")
    }
    else {
        this->p_initArray(arraySize);
    }

}

//TODO: come back to discuss enums and error codes
void C_unionFind::unionNumbers(int numOne, int numTwo) {

    bool retValue = false;

    retValue = this->p_verifyRange(numOne, numTwo);

    if( !retValue ) {
        throw MyException("ERROR: Values not within array range");
    } else {
        this->p_unionNumbers(numOne, numTwo);
    }

}

void C_unionFind::isConnected(int numOne, int numTwo) {
    
    VERIFY_RANGE_ERRORS retValueTwo = UNDEFINED;
    bool retValue;

    retValueTwo = this->p_verifyRange(numOne, numTwo);

    if( !retValueTwo == NUM_ONE_BAD ) {
        throw MyException("ERROR: Values not within array range");
    } else {
        this->p_isConnected(numOne, numTwo);

        if( !retValue ) {
            cout<< "Values "<<numOne<<" and "<<numTwo<< " are NOT connected."<<endl;
        } else {
            cout<< "Values "<<numOne<<" and "<<numTwo<< " ARE connected."<<endl;

        }
    }   
}

void C_unionFind::printArray() {

    if( NULL == this->p_dataArray) {
        throw MyException("ERROR: Array is empty");
    } else {
        this->p_printArray();
    }
}

void C_unionFind::p_initArray(int arraySize) {

    int index = 0;

    this->p_arraySize = arraySize;
    this->p_dataArray = new int[this->p_arraySize];

    for(index=0; index < this->p_arraySize; index++) {
        this->p_dataArray[index] = index;
    }
}

void C_unionFind::p_unionNumbers(int, int) {

    int index = 0;

    for(index =0; index < this->p_arraySize; index++) {
        if (this->p_dataArray[index] == numOne) {
            this->p_dataArray[index] = numTwo;
        }
    }
}

void C_unionFind::p_isConnected(int numOne, int numTwo) {

    bool retValue = false;

    if( this->p_dataArray[numOne] == this->p_dataArray[numTwo]) {
        retValue = true;
    }

    return retValue;
}

void C_unionFind::p_printArray() {

    int index = 0;

    for(index = 0; index < this->p_arraySize; index++) {
        cout<<"Array["<<index<<"] = "<<this->p_dataArray[index]<<endl;
    }
}

VERIFY_RANGE_ERRORS C_unionFind::p_verifyRange( int numOne, int numTwo) {

    VERIFY_RANGE_ERRORS retValue = UNDEFINED;

    //Discus why this isn't sufficient(fixed by adding enums)
    if(numOne < this->p_arraySize ) {
        if( numTwo < this->p_arraySize ) {
            retValue = BOTH_NUMS_VERIFIED;
        } else {
            retValue = NUM_TWO_BAD;
        } 
    } else {
        retValue = NUM_ONE_BAD;
    }

    return retValue

}