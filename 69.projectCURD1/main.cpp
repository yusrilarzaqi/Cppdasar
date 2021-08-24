#include <iostream>
#include <string>
using namespace std;

// membuat tampilan utama
int getOption();
   
// fungsi main
int main(){



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
    return input;
}
