#include <iostream>
using namespace std;

int main(){
    int x,y;
    string output;
    
    cout << ">> "; cin >> x;
    cout << ">> "; cin >> y;

    output = (x<y) ? "Yes" : "No";
    
    /*if(a<b){
        output = "Yes";
    }else {
        output = "No";
    }*/

    cout << output << endl;

    return 0;
}
