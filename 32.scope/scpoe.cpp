#include <iostream>
using namespace std;

// variable global
int x = 1;

// func ambil global
int ambilGlobal(){return x;}
;
// func variable local yang scope nya x_local saja
int x_local(){
    int x = 3;
    return x;
}

int main(){
    cout << "1.variable global : " << x << endl;
    // variable local main
    int x = 2;
    cout << "2.variable local main : " << x << endl;
    cout << "3.variable ambilGlobal : " << ambilGlobal() << endl;
    cout << "4.variable local main : " << x << endl;
    cout << "5.variable x_local : " << x_local() << endl;
    cout << "6.var local main : " << x << endl;
    {
        cout << "7.var local main : " << x << endl;
        // var didalam block
        int x = 4;
        cout << "8.var local block : " << x << endl;
        cout << "9.var global : " << ::x << endl;
    }
    cout << "10.var local main : " << x << endl;
    return 0;
}

