#include <iostream>
using namespace std;

// prototype 
int faktorial(int n);

// func main
int main(){
    int x;
    cout << ">> "; cin >> x;
    cout << "====FAKTORIAL====" << endl;
    cout << "Hasil : " << faktorial(x) << endl;
    return 0;
}

// func faktorial
int faktorial(int n){
    if(n <= 1 )return n;
    else return n * faktorial(n-1);
}


