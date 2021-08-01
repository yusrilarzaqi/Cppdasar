#include <iostream>
#include <string>
using namespace std;

// struct : data yang dibentuk oleh data

struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main(){

    buah apel;
    apel.warna = "merah";
    apel.berat = 2.5;
    apel.harga = 30000;
    apel.rasa = "manis mantap";
    
    buah jeruk;
    jeruk.warna = "oren";
    jeruk.berat = 1.250f;
    jeruk.harga = 18000;
    jeruk.rasa = "asam ";


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
