#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// membuat struct Mahasiswa dgn 3 member
struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

// fungsi untuk mengambil data dari data.bin
Mahasiswa ambilData(int posisi, fstream &myFile){
    Mahasiswa bufferData;
    myFile.seekp((posisi -1)* sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));
    return bufferData;
};

int main(){
    fstream myFile;
    Mahasiswa dataBaca;
    myFile.open("data.bin", ios::in | ios::binary);

    // int posisi = 2;
    dataBaca = ambilData(1, myFile);

    cout << dataBaca.NIM  << endl;
    cout << dataBaca.nama  << endl;
    cout << dataBaca.jurusan  << endl << endl;

    dataBaca = ambilData(2, myFile);

    cout << dataBaca.NIM  << endl;
    cout << dataBaca.nama  << endl;
    cout << dataBaca.jurusan  << endl << endl;
    
    dataBaca = ambilData(3, myFile);

    cout << dataBaca.NIM  << endl;
    cout << dataBaca.nama  << endl;
    cout << dataBaca.jurusan  << endl << endl;
        
    myFile.close();

    return 0;
}

