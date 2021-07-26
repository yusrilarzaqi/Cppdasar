#include <iostream>
using namespace std;
int main(){
    // deklarasi array
    int x[5];
    // atau
    // int x[5] = {1, 2, 3, 4, 5}

    // assignment
    x[0] = 10;
    x[1] = 20;
    x[2] = 30;
    x[3] = 40;
    x[4] = 50;

    // print out 
    // akan menampilkan memory dari x
    // cout << x << endl;
    
    // menampilkan isi dari array
    cout << x[0] << " alamat : " << &x[0] << endl;
    cout << x[1] << " alamat : " << &x[1] << endl;
    cout << x[2] << " alamat : " << &x[2] << endl;
    cout << x[3] << " alamat : " << &x[3] << endl;
    cout << x[4] << " alamat : " << &x[4] << endl;

    // rubah nilai array 
    int *ptr = x;
    *(ptr + 2) = 6;
    // atau
    x[4] = 9;
    cout << endl;
    cout << x[0] << " alamat : " << &x[0] << endl;
    cout << x[1] << " alamat : " << &x[1] << endl;
    cout << x[2] << " alamat : " << &x[2] << endl;
    cout << x[3] << " alamat : " << &x[3] << endl;
    cout << x[4] << " alamat : " << &x[4] << endl;

    // ukuran array x
    cout << "ukuran array x : " << sizeof(x) << " byte"<< endl;

    // jumlah member dari array x
    cout << "jumlah member dari array x : " << sizeof(x)/sizeof(int) << endl;

    return 0;
}
