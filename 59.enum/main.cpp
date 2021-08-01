#include <iostream>
using namespace std;

enum warna{merah, putih, hitam, coklat, kuning, biru};

int main(){
    
    warna baju;
    baju = biru;

    if(baju == biru){
        cout << "baju berwarna biru" << endl;
    }

    cout << "warna biru urutan ke- " << baju << endl;

    return 0;
}
