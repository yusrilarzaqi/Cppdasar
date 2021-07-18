#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "masukan angka :";
    cin >> a;

    if(a == 5){cout << "angka = 5" << endl;}
    else if(a == 3){cout << "angka = 3" << endl;}
    else{cout << "bukan nilai 5 / 3" << endl;}

    cout << "selesai \n";
    cin.get();
    return 0;

}

