#include <iostream>
using namespace std;

int main(){
    
    int a,b,c;

    a=(b=2,cout << "b : " << b << endl ,c=3, cout << "c : " << c << endl, b+c);

    cout << "a : " << a << endl; 

    return 0;
}
