#include <iostream>

using namespace std;
int main(){

    // typedef ialah memberikan alias kepada tipedata
    typedef int I;
    typedef int iVector[2];
    typedef unsigned long ulong;
    typedef double vector;

    using numbers = double;

    I a = 1929;
    iVector b = {2,0};
    ulong c = 2992929828;
    vector d = 19.33330;
    numbers e = 3.14502948;

    cout << "nilai a : " << a << endl;
    cout << "nilai b : " << b[0] << " dan " << b[1] << endl;
    cout << "nilai c : " << c << endl; 
    cout << "nilai d : " << d << endl;
    cout << "nilai e : " << e << endl;
    return 0;
}
