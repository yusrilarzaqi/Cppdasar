#include <iostream>
using namespace std;

void tampilan(double p, double l){
    cout << "Tampilan menggunakan void\n";
    cout << "Luasnya : ";
    cout << p * l << " cm" << endl << endl;
    
    cout << "kelilingnya : ";
    cout << 2*(p+l) << " cm" << endl;
}

int main(){
    double P,L;
    cout << "Palnjang : "; cin >> P;
    cout << "Lebar : "; cin >> L;
    tampilan(P,L);
    return 0;
}
