#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// membuat struct mahasiswa dengan 3 member
struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

// fungsi mengambil data / membaca
/*
Mahasiswa ambilData(int posisi, fstream &myFile){

     * deklarasi variable bufferData dari tipe data 
     * mahasiswa
    Mahasiswa bufferData;

    // mengambil data dari-n 
    myFile.seekp((posisi -1)* sizeof(Mahasiswa));

    // membaca data.bin dimasukan kedalam variable
    myFile.read(
            reinterpret_cast<char*>(&bufferData),
            sizeof(Mahasiswa)
    );

    // mengembalikan bufferData
    return bufferData;
}
*/

// fungsi untuk menulis dari main.cpp ke data.bin
void menulisData(Mahasiswa &data, fstream &myFile){

    // menulis 
    myFile.write(
            reinterpret_cast<char*>(&data),
            sizeof(Mahasiswa)
    );
}

// fungsi untuk menulis posisi dari data.bin
void menulisDataPos(int posisi, Mahasiswa &bufferData, fstream &myFile ){

    // posisi ke-n
    myFile.seekg((posisi -1)* sizeof(Mahasiswa));

    // menulis 
    myFile.write(
            reinterpret_cast<char*>(&bufferData),
            sizeof(Mahasiswa)
    );
}

int main(){

    // deklarasi variable myFile
    fstream myFile;

    // membuka file data.bin dengan :
    // trunc , out, in, dan binary
    myFile.open("data.bin",
            ios::trunc | ios::out | ios::in | ios::binary
    );

    // deklarasi variable mahasiswa
    Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3;

    // assignment 
    mahasiswa1.nama = "Yusril Arzaqi";
    mahasiswa1.NIM = 1243;
    mahasiswa1.jurusan = "TKJ";

    // assignment
    mahasiswa2.nama = "Adam Saputra";
    mahasiswa2.NIM = 1244;
    mahasiswa2.jurusan = "RPL";

    // assignment
    mahasiswa3.nama = "Bimo Alamsyah";
    mahasiswa3.NIM = 1245;
    mahasiswa3.jurusan = "TKJ";
    
    // menulis data mahasiswa ke myFile
    menulisData(mahasiswa1, myFile);
    menulisData(mahasiswa2, myFile);
    menulisData(mahasiswa3, myFile);

    // mahasiswa1.nama = "bahri";
    // menulis dengan menggunakan pos
    // menulisDataPos(1, mahasiswa1, myFile);
    
    // deklarasi variable output
    // Mahasiswa output;

    /*
    // assignment output untuk ambilData posidi 1 di myFile
    output = ambilData(1, myFile);

    // menampilkan output mahasiswa 1
    cout << output.NIM << endl;
    cout << output.nama << endl;
    cout << output.jurusan << endl;

    output = ambilData(2, myFile);

    // menampilkan output mahadiswa 2
    cout << output.NIM << endl;
    cout << output.nama << endl;
    cout << output.jurusan << endl;
    
    output = ambilData(2, myFile);

    // menampilkan output mahasiswa 3
    cout << output.NIM << endl;
    cout << output.nama << endl;
    cout << output.jurusan << endl;
    */
    myFile.close();
    return 0;
}
