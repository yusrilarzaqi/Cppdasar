#include <iostream>
using namespace std;
int kuadrat(int x){return x*x;}
int tambah(int a, int b){return a + b;}

int main(){
    int input, a, b;
    cout << "nilai Kuadrat : "; cin >> input;
    cout << kuadrat(input) << endl;

    cout << "nilai a : "; cin >> a;
    cout << "nilai b : ";cin >> b;
    cout << tambah(a, b) << endl;
    return 0;
}
