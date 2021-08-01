#include <iostream>
#include <string>
using namespace std;

struct aktor{
    string nama;
    int tahun_lahir;
};

struct film{
    string judul;
    int tahun_pembuatan;
    string genre;
    aktor pemeran1;
    aktor pemeran2;
};

int main(){
    
    aktor aktor1, aktor2;
    film film1;
    
    // buat aktor 1
    aktor1.nama = "Hydo issei";
    aktor1.tahun_lahir = 2003;

    // buat aktor 2
    aktor2.nama = "Rissa";
    aktor2.tahun_lahir = 2004;

    // buat film
    film1.judul = "dxd high school";
    film1.tahun_pembuatan = 2016;
    film1.genre = "ecchi";
    film1.pemeran1 = aktor1;
    film1.pemeran2 = aktor2;


    
    

    return 0;
}
