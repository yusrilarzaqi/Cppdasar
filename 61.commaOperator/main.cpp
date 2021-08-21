#include <iostream>
using namespace std;

int main(){
    // deklarasi variable
    int a,b,c;

    // assignmen b = 2
    // menampilkan variable b
    // assignmen c = c
    // menampilkan c 
    // operasi b + c
    // dimasukan di variable a
    a=(b=2,
        cout << "b : " << b << endl ,
        c=3,
        cout << "c : " << c << endl,
        b+c
    );

    // menampilkan variable a
    cout << "a : " << a << endl; 

    return 0;
}
