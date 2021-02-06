#include <iostream>
#include <fstream>
#include "sorting.h"
#include "customErrorClass.h"

using namespace std;

/*
**	Author: Evan Slominski
**	Function Purpose: Set the array to NULL and array size to 0.
**		
**	Function Output: none
**	Side Effects: none
*/
C_Numbers::C_Numbers() {
    this->p_numArray = NULL;
    this->p_arraySize = 0;
}

/*
**	Author: Evan Slominski
**	Function Purpose: Delete p_numArray from memory
**		
**	Function Output: none
**	Side Effects: none
*/
C_Numbers::~C_Numbers() {
    delete[] this->p_numArray;
}

/*
**	Author: Evan Slominski
**	Function Purpose: Check for error exceptions and call the p_initArray p_putDataInArray functions
**		
**	Function Output: none
**	Side Effects: none
*/
void C_Numbers::readFile(char fileName[100]){
    if( NULL != this->p_numArray ) {
        throw MyException("WARNING: Array already initialized, skipping");
    } else if (0 > p_arraySize) {
        throw MyException("WARNING: Value is negative, cannot create array");
    } else {
        this->p_initArray();
    }

    if ( NULL == this->p_numArray ) {
        throw MyException("WARNING: The array has not been initialized");

    } else {
        this->p_putDataInArray();
    }
}

/*
**	Author: Evan Slominski
**	Function Purpose: Check for error exceptions and call the p_sortArray function
**		
**	Function Output: none
**	Side Effects: none
*/
void C_Numbers::sortArray() {
    if( NULL == this->p_numArray ) {
        throw MyException("WARNING: The array has not been initialized");
    } else {
        this->p_sortArray();
    }
}

/*
**	Author: Evan Slominski
**	Function Purpose: Check for error exceptions and call the p_printArray function
**		
**	Function Output: 
**	Side Effects: 
*/
void C_Numbers:: printArray() {

     if( NULL == this->p_numArray) {
        throw MyException("ERROR: Array is empty");
    } else {
        this->p_printArray();
    }
}

/*
**	Author: Evan Slominski
**	Function Purpose: Initialize the p_numArray and set p_arraySize variable
**		
**	Function Output: none
**	Side Effects: none
*/
void C_Numbers::p_initArray() {
    int index = 0;
    
    ifstream data;
    data.open("input.dat");
    data >> p_arraySize;
    data.close();

    this->p_numArray = new int[this->p_arraySize];

    for(index=0; index < this->p_arraySize; index++) {
        this->p_numArray[index] = index;
    }
}

/*
**	Author: Evan Slominski
**	Function Purpose: Put the data from the file into the p_numArray
**		
**	Function Output: 
**	Side Effects: 
*/
void C_Numbers:: p_putDataInArray() {
    int throwAway = 0, index = 0;

    ifstream data;
    data.open("input.dat");
    data >> throwAway;

    for(index=0; index<p_arraySize; index++) {
        
    data >> p_numArray[index];
        
    }
    data.close();
}

/*
**	Author: Evan Slominski
**	Function Purpose: Sort the p_numArray from smallest->largest
**		
**	Function Output: none
**	Side Effects: none
*/
void C_Numbers:: p_sortArray() {
    int index = 0, index2=0;

    cout<<endl<<"Sorted Array Below:"<<endl;

    //sort the dataArray
    for(index=0; index < p_arraySize-1; index++) {

        for(index2=0; index2 < p_arraySize-index-1; index2++) {
            
            if( p_numArray[index2] > p_numArray[index2+1]) {
                int tmp=0;

                tmp = p_numArray[index2];
                p_numArray[index2] = p_numArray[index2+1];
                p_numArray[index2+1] = tmp;
            }
        }
    }
}

/*
**	Author: Evan Slominski
**	Function Purpose: Print out the p_numArray
**		
**	Function Output: the printed array
**	Side Effects: none
*/
void C_Numbers:: p_printArray() {

    int index = 0;

    for(index = 0; index < this->p_arraySize; index++) {
        cout<<index<<this->p_numArray[index]<<" ";
    }
    cout<<endl;
}

/*
**	Author: Evan Slominski
**	Function Purpose: Provide the function calls
**		
**	Function Output: the printed array 
**	Side Effects: none
*/
int main(int argc, char *argv[]){

    C_Numbers sortingClass;

    try {
        char notUsingThisArray[100];
        int index = 0;
        int arraySize = 0;
        
        sortingClass.readFile(notUsingThisArray);
        sortingClass.sortArray();
        sortingClass.printArray();

    } catch (MyException &e) {

        cout<<e.what()<<endl;

    }
    
    return 0;
}

