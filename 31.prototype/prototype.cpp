#include <iostream>
using namespace std;

//prototype / deklarasi func
double hitung_luas(double p, double l);
void println(double x);

// program main
int main(){
    double p, l, L;
    cout << "Panjang : "; cin >> p;
    cout << "Lebar : "; cin >> l;

    L = hitung_luas(p, l);
    println(L);
    return 0;
}
// Func
double hitung_luas(double p, double l){
    return p*l;
}
void println(double x){
    cout << "Hasil : " << x << endl;
}

