#include <iostream>
using namespace std;

void print(int x){
    cout << x << endl;
}

int main(){
    int a,b,c;
    a=(b=5, print(b), c=20, print(c), b*c);
    print(a);
    return 0;
}
