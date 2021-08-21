#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // char kata[5] = {'h', 'e', 'l', 'l', 'o'};
    // tidak bisa ditambah, fix karena array
    //cout << kata << endl;
    
    // string kata("hello world!");
    // cout << kata << endl;
    
    string nama;
    cout << "login : ";cin >> nama;
    system("clear");
    cout << "welcome  " << nama << " to server "<< endl;

    return 0;
}
