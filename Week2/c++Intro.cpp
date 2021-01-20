#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {

    ifstream inputFile;
    int dataFromFile = 0;
    
    inputFile.open("treeNumbers.txt");

    if( true == inputFile.is_open() ) {

        while ( inputFile.eof() )
        {
            inputFile >> dataFromFile;
            cout << dataFromFile << endl;
        }
        
        inputFile.close();
    } else {
        cout<<"The files did not open"<<endl;
    }

    return 0;
}