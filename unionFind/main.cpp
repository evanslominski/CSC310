#include <iostream>
#include "unionFind.h"
#include "customErrorClass.h"

using namespace std;

int main(int argc, char *argv[]){

    C_unionFind myClass;

    //should we include 1 big try catch for whole program?
        //why or why not
        //-wrap whole thing and bail in one spot, or you can
        //try them all indiviually to catch the exact error(this is very cumbersome)
    try {

        myClass.initArray(10);

        myClass.unionNumbers(9,3)
        myClass.unionNumbers(3,1);

        myClass.unionNumbers(100,2);

        myClass.isConnected(3,9);

        myClass.printArray();

    } catch (MyException &e) {

        cout<<e.what()<<endl;

    }
    return 0;
} 