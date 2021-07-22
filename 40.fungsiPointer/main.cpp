#include <iostream>
using namespace std;

void f(int *);
void kuadrat(int *);


int main(){
    int a = 5;
    cout << "alamat a : " << &a << endl;
    cout << "nilai  a : " << a << endl;

    kuadrat(&a);

    cout << "nilai  a : " << a << endl;

    return 0;
}
void f(int *b){
    cout << "alamat b : " << b << endl;
    cout << "nilai  b : " << *b << endl;
}
void kuadrat(int *val){
    *val = *val * *val;
}
