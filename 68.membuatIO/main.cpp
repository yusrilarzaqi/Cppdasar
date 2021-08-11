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

    mahasiswa1.nama = "Adam Saputra";
    mahasiswa1.NIM = 1244;
    mahasiswa1.jurusan = "RPL";

    mahasiswa1.nama = "Bimo Alamsyah";
    mahasiswa1.NIM = 1245;
    mahasiswa1.jurusan = "TKJ";
    


    myFile.close();
    return 0;
}
