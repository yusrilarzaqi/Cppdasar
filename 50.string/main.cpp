#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // char kata[5] = {'h', 'e', 'l', 'l', 'o'};
    // tidak bisa ditambab, fix karena array
    //cout << kata << endl;
    
    string kata("hello world!");
    cout << kata << endl;
    
    string nama;
    cout << "masukan nama \n : ";cin >> nama;

    cout << "selamat datang " << nama << endl;

    return 0;
}
