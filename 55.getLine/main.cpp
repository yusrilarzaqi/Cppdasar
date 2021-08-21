#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // denlarasi varable
    string input_kalimat;

    // user input
    cout << "Masukan ID -> ";
    // getline(denganFuncApa, variable);
    getline(cin, input_kalimat);
    // cout << "Welcome " << input_kalimat << endl;
    
   
    // program menghitung banyak kata
    int posisi = 0;
    int jumlah = 0;

    // ketika benar
    while(true){
        // posisi = index pertama dari " "
        // dan akan membarui seiring while loop
        posisi = input_kalimat.find(" ", posisi+1);
        // yang mennampung nilai yaitu jumlah 
        jumlah++;
        // jika sudah tidak ada " ", maka berhenti
        if (posisi < 0){
            break;
        }
    }
    // menampilkan jumlah kata
    cout << "jumlah kata : " << jumlah << endl;
    
    return 0;
}
