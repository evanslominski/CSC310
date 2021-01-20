#include <iostream>
#include <time.h>
#include <math.h>

#include <fstream>

using namespace std;

struct S_NODE{
    int value;
    S_NODE *lNext;
    S_NODE *rNext;
};

class C_bst{
    public:
        C_bst();
        ~C_bst();
        S_NODE* createNode(int);
        void insert(int);
        void print();
        void sort();
        int height();
    private:
        S_NODE *head;
        int nodeCount;

        void p_CreateTree(int*, int, int);
        S_NODE* p_insert(S_NODE*, S_NODE*);
        void p_InOrderprint(S_NODE*);
        void p_sort();
        void p_populateArray(S_NODE*, int*, int);
        void recursiveDelete(S_NODE*);
        int p_height(S_NODE*);
};

C_bst::C_bst(void){

}

C_bst::~C_bst(void){


}

void C_bst::sort(){

}

void C_bst::p_sort(){
  
}

void C_bst::p_CreateTree(int *myArray, int start, int end){    
    
}

void C_bst::p_populateArray(S_NODE* node, int *myArray, int index){
    
}

void C_bst::recursiveDelete(S_NODE *node){

}

S_NODE* C_bst::createNode(int value){

}

void C_bst::insert(int value){

}

void C_bst::print(){

}

int C_bst::height(void){
    
}

int C_bst::p_height(S_NODE *node){
    
}

void C_bst::p_InOrderprint(S_NODE *node){
    
}

S_NODE* C_bst::p_insert(S_NODE* parent, S_NODE *nodeToInsert){
    
}

int main(int argc, char *argv[]){

    return 0;
}