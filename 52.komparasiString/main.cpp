#include <iostream>
#include <string>
using namespace std;

// prototype func login
void login();

// func main
int main(){
    // memanggil func login
    login();
    return 0;
}
// func login
void login(){
    // deklarasi variable
    string input;
    string nama("yusril");

    // ketika benar
    while(true){
        // user input
        cout << "login : ";cin >> input;
        // jika input benar
        if(input == nama){
            system("clear");
            cout << "Welcome Admin" << endl;
            break;
        }
        // jika salah
        cout << "Acsses denied!" << endl;
    }
}
