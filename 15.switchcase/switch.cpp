#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "masukan angka : ";
    cin >> a;

    switch(a){
        case 1:
            cout << "nilai = 1 \n";
            break;
        case 2:
            cout << "nilai = 2 \n";
            break;
        default:
            cout << "default \n";
            break;
    }
    
    cout << "selesai" << endl;

    cin.get();
    return 0;
}
