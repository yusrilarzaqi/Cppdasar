#include <iostream>
using namespace std;
int main(){
    int a = 5;
    
    // pointer 
    int *aPtr = &a;

    cout << "nilai a : " << a << endl;
    cout << "alamat a : " << &a << endl;

    a = 10;
    cout << aPtr << endl;
    return 0;
}
