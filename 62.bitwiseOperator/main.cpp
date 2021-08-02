#include <iostream>
#include <string>
#include <bitset>
using namespace std;

void printBinary(unsigned short val, string name){
    cout << name << " : " << bitset<8>(val) << endl;
}

int main(){
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    cout << "& = AND" << endl;
    c = a & b ;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c : " << c << endl;

    cout << "\n| = OR" << endl;
    c = a|b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c : " << c << endl;
    
    cout << "\n| = XOR" << endl;
    c = a^b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "c : " << c << endl;
 
    cout << "\n~ = NOT" << endl;
    c = ~a;
    printBinary(a,"a");
    printBinary(c,"c");
    cout << "c : " << c << endl;

    cout << "\n<< = SHL" << endl;
    c = a << 2;
    printBinary(a,"a");
    printBinary(c,"c");
    cout << "c : " << c << endl;

    cout << "\n>> = SHR" << endl;
    c = a >> 1;
    printBinary(a,"a");
    printBinary(c,"c");
    cout << "c : " << c << endl;



    return 0;
}
