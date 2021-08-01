#include <iostream>
using namespace std;

int main(){
    int a,b;
    string output;
    
    cout << ">> "; cin >> a;
    cout << ">> "; cin >> b;

    output = (a<b) ? "Yes" : "No";
    
    /*if(a<b){
        output = "Yes";
    }else {
        output = "No";
    }*/

    cout << output << endl;

    return 0;
}
