#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 2;

    bool hasil;

    // operasi logika (not, and, or)
    // not
    // hasil = !(a == b);
    
    // and &&
    hasil = (a == 3) and (b == 2); // true true 
    cout << hasil << endl;
    hasil = (a == 4)and(b==2); // false true
    cout << hasil << endl;
    hasil = (a == 3)&&(b == 1); // true false
    cout << hasil << endl;
    hasil = (a == 4)&&(b == 2);
    cout << hasil << endl;
    

    // or
    cout << "\n\n ===OR===" << endl;
    hasil = (a == 3)or(b == 2);
    cout << hasil << endl;
    hasil = (a == 2)||(b == 1);
    cout << hasil << endl;



    return 0;
}

