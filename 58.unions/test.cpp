#include <iostream>
#include <string>
using namespace std;

/* union berati mengabungan sebuah vaiable beda tipe data
 * tipe data "data" mempunyai member int a dan char b[4]
 * var a dan b saling berhubungan
 * */
union data{
    int a;
    double b;
};

int main(){
    
    // deklarasi variable
    data test;

    // assignment
    test.a = 102829;

    // tampil
    cout << "test.a : " << test.a << endl;
    cout << "test.b : " << test.b << endl << endl;
    
    /* jika char b dirubah maka nilai a juga berubah secara
     * auto */
    test.b = 23.1;

    // tampil
    cout << "test.a : " << test.a << endl;
    cout << "test.b : " << test.b << endl;



    return 0;
}
