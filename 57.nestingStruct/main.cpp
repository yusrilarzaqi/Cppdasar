#include <iostream>
#include <string>
using namespace std;

// membuat struct dengan member 2 string dan int
struct aktor{
    string nama;
    int tahun_lahir;
};

// membuat nesting struct 
struct film{
    string judul;
    int tahun_pembuatan;
    string genre;
    // pemeran mempunyai 2 member
    aktor pemeran1;
    aktor pemeran2;
};

int main(){
    
    // deklarasi variable
    aktor aktor1, aktor2;
    film film1;
    
    // buat aktor 1
    aktor1.nama = "Hydo issei";
    aktor1.tahun_lahir = 2003;

    // buat aktor 2
    aktor2.nama = "Rissa";
    aktor2.tahun_lahir = 2004;

    // buat film
    film1.judul = "DxD high school";
    film1.tahun_pembuatan = 2016;
    film1.genre = "ecchi, harem";
    film1.pemeran1 = aktor1;
    film1.pemeran2 = aktor2;

    // tampil
    system("clear");
    cout << "Judul : " << film1.judul << endl
         << "tahun : " << film1.tahun_pembuatan << endl
         << "genre : " << film1.genre << endl
         << "actor : - " << film1.pemeran1.nama << endl
         << "           - " << film1.pemeran1.tahun_lahir << endl
         << "        - " << film1.pemeran2.nama << endl
         << "           - " << film1.pemeran2.tahun_lahir << endl;
    

    return 0;
}
