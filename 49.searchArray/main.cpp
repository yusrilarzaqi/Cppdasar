#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const size_t arraySize = 10;

void printArray(array<int, arraySize> &angka){
    cout << "Angka : ";
    for(int &nilai : angka){
        cout << nilai << " ";
    }cout << endl;
}


int main(){
    // Deklarasi variable
    array<int, arraySize> angka = {9,8,7,6,5,4,3,2,1,0};
    bool ketemu;
    int nilaiCari;

    // menampilkan array
    printArray(angka);
    
    // user input 
    cout << "angka yang dicari : ";cin >> nilaiCari;
    
    // fungsi sort
    sort(angka.begin(), angka.end());
    
    // cek ketemu atau tidak [true/false]
    ketemu = binary_search(angka.begin(), angka.end(), nilaiCari);

    // jika ketemu
    if(ketemu){
        cout << "ditemukan" << endl;
    }
    // jika tidak
    else cout << "tidak ditemukan" << endl;;

    return 0;
}
