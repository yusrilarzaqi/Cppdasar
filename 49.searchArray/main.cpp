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

    array<int, arraySize> angka = {9,8,7,6,5,4,3,2,1,0};
    bool ketemu;
    int nilaiCari;
    printArray(angka);
    cout << "angka yang dicari : ";cin >> nilaiCari;
    sort(angka.begin(), angka.end());
    ketemu = binary_search(angka.begin(), angka.end(), nilaiCari);
    if(ketemu){
        cout << "ditemukan" << endl;
    }else cout << "tidak ditemukan" << endl;;
    printArray(angka);

    return 0;
}
