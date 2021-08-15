#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

Mahasiswa ambilData(int &posisi, fstream &myFile){
    Mahasiswa bufferData;
    myFile.seekp((posisi -1)* sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));
    return bufferData;
}

int main(){
    fstream myFile;
    Mahasiswa dataBaca;
    myFile.open("data.bin", ios::in | ios::binary);

    int posisi = 2;
    dataBaca = ambilData(posisi, myFile);

    cout << dataBaca.NIM  << endl;
    cout << dataBaca.nama  << endl;
    cout << dataBaca.jurusan  << endl << endl;
     
    myFile.close();

    return 0;
}

