#include <iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 5;
    // increment & decrement
    // pre & post
    // postincrement
    cout << a << endl;
    cout << a++ << endl; //diprint dahulu lalu ditambah
    cout << a << endl << endl;

    //preincrement 
    cout << b << endl;
    cout << ++b << endl; //ditambah dahulu 
    cout << b << endl << endl;

    //postdecrement
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl << endl;

    //predecrement
    cout << b << endl;
    cout << --b << endl;
    cout << b << endl << endl;

    return 0;
}
