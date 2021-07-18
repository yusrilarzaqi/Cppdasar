#include <iostream>
using namespace std;

int main(){
    int a = 10;
    // assignment
    cout << a << endl;
    a += 3;
    cout << "ditambah 3 = " << a << endl;
    
    a-=3;
    cout << "dikurang 3 = " << a << endl;

    a/=3;
    cout << "dibagi 3 = " << a << endl;

    a*=3;
    cout << "dikali 3 = " << a << endl;

    a%=3;
    cout << "dimodulus 3 = " << a << endl;

    return 0;
}
