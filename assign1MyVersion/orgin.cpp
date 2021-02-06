#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){

    int index = 0, index2 =0; 
    int fileLength = 0;

    //open input.dat and get the how many nums are in the file
    ifstream data;
    data.open("input.dat");
    data >> fileLength;
    cout<< "FileLength: " <<  fileLength << endl;

    //make array the exact size we need
    int dataArray[fileLength];

    //put data from input.dat in a int array
    for(index=0; index<fileLength; index++) {
        data >> dataArray[index];
        //cout << dataArray[index]<<" ";
    }
    
    //print out the sorted dataArray
    for(index=0; index<fileLength; index++) {
        cout<< dataArray[index] << " ";
    }
    cout << endl;
    return 0;
}