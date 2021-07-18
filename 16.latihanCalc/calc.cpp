#include <iostream>
using namespace std;
int main(){
    float a,b,hasil;
    char aritmatika;

    cout << "====CALCULATOR====" << endl;
    cout << "masukan angka pertama : ";
    cin >> a;
    cout << "pilih operator -, +, /, * : ";
    cin >> aritmatika;
    cout << "masukan angka kedua : ";
    cin >> b;

    cout << "\nHasil dari perhitngan " << endl;
    cout << a << aritmatika << b;

    if(aritmatika == '+'){hasil = a+b;}
    else if(aritmatika == '-'){hasil = a-b;}
    else if(aritmatika == '/'){hasil = a/b;}
    else if(aritmatika == '*'){hasil = a*b;}
    else{cout << "ERROR" << endl;}

    cout << " = " << hasil << endl;

    cin.get();
    return 0;
}
