#include <iostream>
using namespace std;

int fib(int n);

int main(){
    int n, h;
    cout << ">> "; cin >> n;
    h = fib(n);
    cout << "hasil : " << n << endl;
    return 0;
}

int fib(int n){
    cout << "n : " << n << endl;
    if((n == 0)or(n == 1)){
        return n;
    }
    else return fib(n - 1) + fib(n - 2);
}
