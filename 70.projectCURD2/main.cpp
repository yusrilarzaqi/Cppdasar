#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Mahasiswa{
    int pk;
    string nama;
    string NIM;
    string jurusan;
};

// membuat tampilan utama
int getOption();
// func check data base
void checkData(fstream &data);
// func write data
void writeData(fstream &data, int posisi, Mahasiswa &input){
    data.seekp((posisi-1)* sizeof(Mahasiswa), ios::beg);
    data.write(reinterpret_cast<char*>(&input), sizeof(Mahasiswa));
}

void readData(fstream &data, int posisi, Mahasiswa &input){
    data.seekg();
    data.read();
}

// func menambahkan data mhs
void addMahasiswa(fstream &data){
    Mahasiswa input;
    input.pk = 1;
    cout << "Nama : ";
    getline(cin, input.nama);
    cout << "NIM : ";
    getline(cin, input.NIM);
    cout << "Jurusan : ";
    getline(cin, input.jurusan);

    writeData(data, 1, input);
}

// fungsi main
int main(){

    fstream data;
    checkData(data);
    // deklarasi variable
    // mengambil retuen getOption kedalam inputUser
    int inputUser = getOption();
    char is_continue;
    enum option{CREATE=1, READ, UPDATE, DELATE, FINISH};

    // ketika input user tidak finish(5) maka kerjakan
    while(inputUser != FINISH){
        
        // switch inputUser 
        switch(inputUser){

            // kasus jika inputUser memilih 1 maka 
            case CREATE:
                // tampilkan lalu break
                cout << "Menambahkan data mahasiswa" << endl;
                addMahasiswa(data);
                break;
            case READ:
                cout << "Menampilkan data mahasiswa" << endl;
                break;
            case UPDATE:
                cout << "Menrubah data mahasiswa" << endl;
                break;
            case DELATE:
                cout << "Menghapus data mahasiswa" << endl;
                break;

            // jika  inputUser menginputkan selain diatas maka 
            default:
                // tampilkan lalu break
                cout << "command not found" << endl;
                break;
        }
        
        // membuat titik poin untuk continue
        label_continue:
        
        // lalu ulangi atau tidak
        cout << "continue [y/n] : "; cin >> is_continue;
        
        // jika y maka  kembali menampilkan tamplate
        if((is_continue == 'y') | (is_continue == 'y')){
            inputUser = getOption();
        }
        
        // jika n maka break loop ini
        else if((is_continue == 'n') | (is_continue == 'N')){
            break;
        }

        // maka jika selain yg diatas akan kembali ke titik poin continue
        else {
            cout << "command not found" << endl;
            goto label_continue;
        }
    }
    
    cin.get();
    return 0;
}
int getOption(){
    
    // deklarasi variable
    int input;

    // system("clear");
    cout << "PROGRAM CURD  " << endl;
    cout << "--------------  " << endl;
    cout << "(1)add mahasiswa" << endl;
    cout << "(2)show         " << endl;
    cout << "(3)change       " << endl;
    cout << "(4)delate       " << endl;
    cout << "(5)exit         " << endl;
    cout << "----------------" << endl;
    cout << ">>> ";
    
    // user menginputkan pilihan
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    return input;
}

void checkData(fstream &data){
     data.open("data.bin", ios::in | ios::out | ios::binary);

    if(data.is_open()){
        cout << "file data.bin ditemukan" << endl;
    }else{
        cout << "tidak ditemukan data.bin dan akan dibuatka  baru " << endl;
        data.close();
        data.open("data.bin",ios::in |
                ios::out | ios::binary | ios::trunc
        );
    }
}
