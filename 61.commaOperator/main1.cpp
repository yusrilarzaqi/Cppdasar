#include <iostream>
using namespace std;

void print(int x){
    cout << x << endl;
}

int main(){
    int a,b,c;
    a=(cin >> b, print(b), cin >> c, print(c), b*c);
    print(a);
    return 0;
}
