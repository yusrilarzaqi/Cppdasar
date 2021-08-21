#include <iostream>
#include <string>
#include <bitset>
using namespace std;

// membuat fungsi print binary dengan bitset 
// unsingned berarti tipe data yang digunakan akan positif semua
// tipe data short yaitu bilangan bulat dengan 16 bit
void printBinary(unsigned short val, string name){
    // menampilkan nama & bilangan biner l
    cout << name << " : " << bitset<8>(val) << endl;
}

int main(){

    // deklarasi variable 
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    // AND &
    // 0 0 : 0
    // 1 0 : 1
    // 0 1 : 1
    // 1 1 : 1
    cout << "& = AND" << endl;
    c = a & b ;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c : " << c << endl;

    // OR |
    // 0 0 : 0
    // 0 1 : 0
    // 1 0 : 0
    // 1 1 : 0
    cout << "\n| = OR" << endl;
    c = a|b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c : " << c << endl;
    
    // XOR ^
    // 0 0 : 0
    // 0 1 : 1
    // 1 0 : 1
    // 1 1 : 0
    cout << "\n| = XOR" << endl;
    c = a^b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c : " << c << endl;
 
    // NOT ~
    // 0 : 1
    // 1 : 0
    cout << "\n~ = NOT" << endl;
    c = ~a;
    printBinary(a,"a");
    printBinary(c,"c");
    cout << "c : " << c << endl;

    // SHIFT LEFT <<
    // 1101 = 1010
    cout << "\n<< = SHL" << endl;
    c = a << 2;
    printBinary(a,"a");
    printBinary(c,"c");
    cout << "c : " << c << endl;

    // SHIF RIGHT
    // 1101 = 0110
    cout << "\n>> = SHR" << endl;
    c = a >> 1;
    printBinary(a,"a");
    printBinary(c,"c");
    cout << "c : " << c << endl;

    return 0;
}
