#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    fstream myFile;
    int hasil;

    myFile.open("data.bin", ios::out | ios::binary);
    myFile.write(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    myFile.close();
    return 0;
}
  
