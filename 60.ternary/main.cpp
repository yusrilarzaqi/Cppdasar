#include <iostream>
using namespace std;

int main(){
    // deklarasi variable
    int x,y;
    string output;
    
    // input user 
    cout << ">> "; cin >> x;
    cout << ">> "; cin >> y;

    // jika x < y benar maka "Yes", jika tidak "No"
    output = ( x < y ) ? "Yes" : "No";
    
    // cara lama 
    /*if(a<b){
        output = "Yes";
    }else {
        output = "No";
    }*/

    // tampilkan output
    cout << output << endl;

    return 0;
}
