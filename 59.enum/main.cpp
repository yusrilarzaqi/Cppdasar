#include <iostream>
using namespace std;

// enum membuat variable seraca berurutan
enum warna{merah=1, putih, hitam, coklat, kuning, biru};

int main(){
    
    // deklarasi variable
    warna baju;

    // assignment 
    // baju biru
    baju = biru;

    /*
    for(int i=1 ; i <=  biru; i++){
        cout << i << " ";
    }
    */
    // jika baju == biru
    if(baju == biru){
        // tampilkan ini
        cout << "baju berwarna biru" << endl;
    }
    // tampilkan urutan warna baju
    cout << "warna biru urutan ke- " << baju << endl;

    return 0;
}
