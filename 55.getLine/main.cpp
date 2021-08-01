#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string input_kalimat;
    cout << "Masukan ID -> ";
    getline(cin, input_kalimat);
    // cout << "Welcome " << input_kalimat << endl;

    int posisi = 0;
    int jumlah = 0;

    while(true){
        posisi = input_kalimat.find(" ", posisi+1);
        jumlah++;
        if (posisi < 0){break;}
    }
    cout << "jumlah kata : " << jumlah << endl;
    return 0;
}
