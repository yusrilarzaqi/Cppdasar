#include <iostream>
using namespace std;

void tampilan(double p, double l,char a){
    cout << "Tampilan menggunakan void\n";
    if(a == 'l'){
        cout << "Luasnya : ";
        cout << p * l << endl;
    }
    else if(a == 'k'){
        cout << "Kelilingnya : ";
        cout<< 2 * (p + l) << endl;
    }
}

int main(){
    double P,L;
    cout << "Palnjang : "; cin >> P;
    cout << "Lebar : "; cin >> L;
    tampilan(P,L,'l');
    tampilan(P, L, 'k');
    return 0;
}
