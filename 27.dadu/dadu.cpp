#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char lanjut;
    while(true){
        cout << "Lempar dadu [y/n] : "; cin >> lanjut;
        if(lanjut == 'y')cout << 1+(rand()%6) << endl;
        else if(lanjut=='n')break;
        else cout << "ERROR : masukan [y/n]\n";
    }
    return 0;
}
