#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    // deklarasi variable
    ifstream myFile;
    string buffer, nama, output;
    int jumlah=0;
    int no;
    bool ulang = true;

    // membuat file data.txt dengan ios::in / write
    myFile.open("data.txt", ios::in);
    // ketika benar
    while(ulang){

        // ambil 1 line didalam variable buffer 
        getline(myFile, buffer);
        
        // output menambahkan di belakang (append) buffer
        output.append("\n"+buffer);
        
        // jika buffer = "dsftar" berhenti
        // atau jika saat kata "daftar" maka loop akan berhenti
        if(buffer == "daftar"){
        
            // ulang = false;
            break;
        }
    }
    
    // menampilkan isi output
    cout << output << endl;

    // mengambil 1 line dimasukan di var buffer
    getline(myFile, buffer);
    
    // menampilkan var buffer
    cout << buffer << endl;
    
    // ketika  myfile tidak end of file maka
    while(!myFile.eof()){
    
        // file dimasukan dimasukan var no dan nama
        myFile >> no;
        myFile >> nama;
        
        // jumlah ditambah seiring loop
        jumlah++;
        
        // menampilkan no dan nama
        cout <<  no << "   " << nama << endl;
    }
    // menampilkan variable jumlah 
    cout << "jumlah : " << jumlah << endl;

    // menutup kembali myFile
    myFile.close();
    return 0;
}
