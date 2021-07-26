#include <iostream>
#include <array>
using namespace std;

int main(){
    // membuat array
    // array<tipe data, ukuran array> nama;
    array<int, 5>x;
    
    // menampilkan
    for(int i = 0; i<5; i++){
        x[i] = i;
        cout << "nilai x : " << x[i] ;
        cout << " alamat : " << &x[i] << endl;
    }
    
    cout << endl;
    // menampilkan ukuran array 
    cout << x.size() << endl;

    // menampilkan alamat awal 
    cout << x.begin() << endl;

    // menampilkan alamat akhir
    cout << x.end() << endl;

    // menampilkan nilai dengan index
    cout << x.at(2) << endl;

    return 0;
}
