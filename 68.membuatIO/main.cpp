#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

Mahasiswa ambilData(int posisi, fstream &myFile){
    Mahasiswa bufferData;
    myFile.seekp((posisi -1)* sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));
    return bufferData;
}

void menulisData(Mahasiswa &data, fstream &myFile){
    myFile.write(reinterpret_cast<char*>(&data), sizeof(Mahasiswa));
}

void menulisDataPos(int posisi, Mahasiswa &bufferData, fstream &myFile ){
    myFile.seekg((posisi -1)* sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&bufferData), sizeof(Mahasiswa));
}

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
    
    menulisData(mahasiswa1, myFile);
    menulisData(mahasiswa2, myFile);
    menulisData(mahasiswa3, myFile);
    
    // mahasiswa1.nama = "bahri";
    menulisDataPos(1, mahasiswa1, myFile);

    Mahasiswa output;
    output = ambilData(1, myFile);
    

    cout << output.NIM << endl;
    cout << output.nama << endl;
    cout << output.jurusan << endl;
    
    myFile.close();
    return 0;
}
