#ifndef _UNION_FIND_H_
#define _UNION_FIND_H

#include <iostream>

using namespace std;

enum VERIFY_RANGE_ERRORS {
    NUM_ONE_BAD = 1,
    NUM_TWO_BAD,
    BOTH_NUMS_VERIFIED,
    UNDEFINED
};

class C_unionFind {
    public:
        C_unionFind();
        ~C_unionFind();
        void initArray(int);
        void unionNumbers(int, int);
        void isConnected(int, int);
        void printArray();

    private:
        int *p_dataArray;
        int p_arraySize;

        void p_initArray(int);
        void p_unionNumbers(int, int);
        void p_isConnected(int, int);
        void p_printArray();
        VERIFY_RANGE_ERRORS p_verifyRange(int, int);


};

#endif
