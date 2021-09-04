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
void writeData(fstream &data, int posisi, Mahasiswa &input);
// func mengambil size data
int getDataSize(fstream &data);
// func membaca yg ada didalam data.bin
Mahasiswa readData(fstream &data, int posisi);
// func menambahkan data mhs
void addMahasiswa(fstream &data);

void displayDataMahasiswa(fstream &data);

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
                displayDataMahasiswa(data);
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

    system("clear");
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
void writeData(fstream &data, int posisi, Mahasiswa &input){
    data.seekp((posisi-1)*sizeof(Mahasiswa), ios::beg);
    data.write(
            reinterpret_cast<char*>(&input),
            sizeof(Mahasiswa)
    );

}
int getDataSize(fstream &data){
    int start, end;
    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::end);
    end = data.tellg();
    return (end-start)/sizeof(Mahasiswa);
}
Mahasiswa readData(fstream &data, int posisi){
    Mahasiswa readMahasiswa;
    data.seekg((posisi-1)*sizeof(Mahasiswa), ios::beg);
    data.read(
            reinterpret_cast<char*>(&readMahasiswa),
            sizeof(Mahasiswa)
    );
    return readMahasiswa;
}
void addMahasiswa(fstream &data){
    Mahasiswa input, last;
    input.pk = 1;
 
    int size = getDataSize(data);
    cout << "data mahasiswa : " << size << endl; 
    
    if (size==0){
        input.pk = 1;
    }else {
        last = readData(data, size);
        cout << "pk : " << last.pk << endl;
        input.pk = last.pk + 1;
    }
    cout << "Nama : ";
    getline(cin, input.nama);
    cout << "NIM : ";
    getline(cin, input.NIM);
    cout << "Jurusan : ";
    getline(cin, input.jurusan);

    writeData(data,size+1, input);

}
void displayDataMahasiswa(fstream &data){
    int size = getDataSize(data);
    Mahasiswa show;
    cout << "No.\tpk.\tNIM.\tNama.\tJurusan" << endl;
    for(int i = 1; i <= size; i++){
        show = readData(data, i);
        cout << i << "\t";
        cout << show.pk << "\t";
        cout << show.NIM << "\t";
        cout << show.nama << "\t";
        cout << show.jurusan << endl;
    }

}
