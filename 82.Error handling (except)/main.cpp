#include <iostream>
#include <exception>
using namespace std;


// 1.syntax error
// - apabila kelasahan penulisan syntax
//
// 2.linking error
// - prototype apabilia sudah di deklarasi tapi tidak 
// 
// 3.no-error
// - kesalahan terhadap program kita sendiri
//
// 4.runtime
// - error ketika program dijalankan

int pembagian(int &a, int &b){
    if(b == 0){
        throw overflow_error("Error : division by zero");
    }
    return a/b;
}


int main(){
    int a, b, c;
    while(true){
        cout << "num : "; cin >> a;
        cout << "denum : "; cin >> b;
        try{
            c = pembagian(a, b);
            cout << "hasil : " << c << endl;
        }catch(exception &e){
            cout << e.what() << endl;
        }
    }
    cout << "end of line " << endl;
    cin.get();
    return 0;
}



