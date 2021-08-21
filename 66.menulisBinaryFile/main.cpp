#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main(){
    
    // deklarasi variable
    fstream myFile;
    int hasil = 20192;

    // open file data.bin
    // ios :: out = write
    // ios :: binary = biner
    myFile.open("data.bin", ios::out | ios::binary);

    // cara menulis biner
    myFile.write(
            // reinerpret_cast<char*>(& hasil), sizeof
            reinterpret_cast<char*>(&hasil), sizeof(hasil)
    );

    // menutup myfile
    myFile.close();
    return 0;
}
  
