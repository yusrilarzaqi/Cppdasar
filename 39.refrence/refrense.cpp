#include <iostream>
using namespace std;

int main(){
    int a=5;
    cout << "nilai a : " << a << endl;
    cout << "alamat a : " << &a << endl << endl;

    // refrence 
    int &b = a;
    cout << "nilai b : " << b << endl;
    cout << "alamat b : " << &b << endl << endl;

    a = 6;
    cout << a << endl;
    cout << b << endl << endl;

    b = 7;
    cout << a << endl;
    cout << b << endl;



    return 0;
}
