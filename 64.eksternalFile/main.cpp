#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ofstream myFile;

    /* ios::out = default operasi output
     * ios::app = menambahkan diakhir baris append
     * ios::trunc = membuat file jika tidak ada 
     * dan jika ada akan menghapus ganti yang baru
     * (over write)*/


    myFile.open("test3.txt", ios::app);
    myFile << "\nBaris baru";
    myFile.close();

    myFile.open("test1.txt", ios::out);
    myFile << "djdn";
    myFile.close();

    myFile.open("test2.txt", ios::trunc);
    myFile << "Hednmm";
    myFile.close();


    return 0;
}
