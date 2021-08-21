#include <iostream>
#include <string>
using namespace std;

// struct : data yang dibentuk oleh data
/* strcut ialah tipe data yang digunakan sbg group yang didalamya bisa diisi dengan
 * berbagai tipe data 
 * keyword_struct tag/name_struct{
 *      member dari struct
 *      string a;
 *      char b[5];
 * }*/
struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main(){
    
    // deklarasi variable apel dengan menggunakan buah
    buah apel;
    buah jeruk;
    
    // assignment
    apel.warna = "merah";
    apel.berat = 2.5;
    apel.harga = 30000;
    apel.rasa = "manis mantap";
    
    jeruk.warna = "oren";
    jeruk.berat = 1.250f;
    jeruk.harga = 18000;
    jeruk.rasa = "asam ";

    // menampilkan isi dari sebuah variable
    cout << "Apel" << endl;
    cout << "- " << apel.warna << endl;
    cout << "- " << apel.berat << endl;
    cout << "- " << apel.harga << endl;
    cout << "- " << apel.rasa << endl;
    
    cout << "Jeruk" << endl;
    cout << "- " << jeruk.warna << endl;
    cout << "- " << jeruk.berat << endl;
    cout << "- " << jeruk.harga << endl;
    cout << "- " << jeruk.rasa << endl;
 
    return 0;
}
