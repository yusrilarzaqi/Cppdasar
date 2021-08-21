#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    // deklarasi variable 
    fstream myFile;
    int hasil;

    // open file data.bin
    // ios :: in = read atau data masuk
    myFile.open("data.bin", ios::in | ios::binary);
    
    // membaca file dari file data.bin ke main.cpp
    myFile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));

    // menampilkan jumblah size
    cout << "jumlah size : " << sizeof(hasil) << endl;

    // menampilkan hasil
    cout << hasil << endl;

    myFile.close();
    return 0;
}
/*  myFile.open("data.bin", ios::out | ios::binary);
    myFile.write(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    myFile.close();
*/
