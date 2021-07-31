#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    string nama("yusril");
    while(true){
        cout << "login : ";cin >> input;
        if(input == nama){
            cout << "Welcome Admin" << endl;
            break;
        }
        cout << "Acsses denied!" << endl;
    }
    return 0;
}
