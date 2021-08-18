#include <iostream>
#include <string>
using namespace std;

int getOption(){
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


    cin >> input;
    return input;
}

int main(){
    int inputUser = getOption();
    char is_continue;
    enum option{CREATE=1, READ, UPDATE, DELATE, FINISH};
    while(inputUser != FINISH){
        switch(inputUser){
            case CREATE:
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
            default:
                cout << "command not found" << endl;
                break;
        }

        label_continue:
        cout << "continue [y/n] : "; cin >> is_continue;
        
        if((is_continue == 'y') | (is_continue == 'Y')){
            inputUser = getOption();
        }else if((is_continue == 'n') | (is_continue == 'N')){
            break;
        }else {
            goto label_continue;
        }
    }
    
    cin.get();
    return 0;
}
