#include <iostream>
#include <fstream>
#include <string>

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
    int posisi=1;
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
    
    Mahasiswa output;
    output = ambilData(posisi, myFile);
    
    cout << output.NIM << endl;
    cout << output.nama << endl;
    cout << output.jurusan << endl;
    
    myFile.close();
    return 0;
}
