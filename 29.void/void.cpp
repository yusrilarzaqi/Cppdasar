#include <iostream>
using namespace std;
void tampil(int input){
    cout << "Menampilkan dengan fungsi void " << endl;
    cout << input << endl;
}
int main(){
    int input;
    cout << ">> ";cin >> input;
    tampil(input);
    return 0;
}
