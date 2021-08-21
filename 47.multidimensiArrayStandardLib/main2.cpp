#include <iostream>
#include <array>
using namespace std;

const int kolom = 3;
const int baris = 2;

void printArr(array< array <int, kolom>, baris> &nilai){
    for(array<int, kolom> nilaibaris : nilai ){
        cout << "[ ";
        for(int nilaiKol : nilaibaris){
            cout << nilaiKol << " ";
        }
        cout << "]" << endl;
    }
}

int main(){
    
    array< array<int, kolom> , baris> nilaiMD = {0, 1, 2, 3, 4, 5};
    printArr(nilaiMD);
    return 0;
}

