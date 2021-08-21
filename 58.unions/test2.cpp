#include <iostream>
#include <string>
using namespace std;

/* union berati mengabungan sebuah vaiable beda tipe data
 * tipe data "data" mempunyai member int a dan char b[4]
 * var a dan b saling berhubungan
 * */
union data{
    int a;
    char b[6];
};

int main(){
    
    // deklarasi variable
    data test;

    // assignment
    test.b[0] = 'y';
    test.b[1] = 'u';
    test.b[2] = 's';
    test.b[3] = 'r';
    test.b[4] = 'i';
    test.b[5] = 'l';

    
    // tampil
    cout << "test.a : " << test.a << endl;
    cout << "test.b : " << test.b << endl << endl;
    
    /* jika char b dirubah maka nilai a juga berubah secara
     * auto */
    test.a = 102829;
    // tampil
    cout << "test.a : " << test.a << endl;
    cout << "test.b : " << test.b << endl;



    return 0;
}
