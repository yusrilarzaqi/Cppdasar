#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

int main(){
    fstream myFile;
    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3;

    mahasiswa1.nama = "Yusril Arzaqi";
    mahasiswa1.NIM = 1243;
    mahasiswa1.jurusan = "TKJ";

    mahasiswa2.nama = "Adam Saputra";
    mahasiswa2.NIM = 1244;
    mahasiswa2.jurusan = "RPL";

    mahasiswa3.nama = "Bimo Alamsyah";
    mahasiswa3.NIM = 1245;
    mahasiswa3.jurusan = "TKJ";
    
    myFile.write(reinterpret_cast<char*>(&mahasiswa1), sizeof(Mahasiswa)); 
    myFile.write(reinterpret_cast<char*>(&mahasiswa2), sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&mahasiswa3), sizeof(Mahasiswa));

    myFile.close();
    return 0;
}
