#include <iostream>
using namespace std;

void refrense(int &);
void kuadrat(int &);

int main(){
    int a = 5;
    cout << "alamat a : " << &a << endl;
    cout << "nilai  a : " << a << endl;
    
    // refrense(a);
    kuadrat(a);
    cout << "nilai  a : " << a << endl;

    
    return 0;
}
void refrense(int &b){
    b = 10;
    cout << "alamat b : " << &b << endl;
    cout << "nilai  b : " << b << endl;
}
void kuadrat(int &nilaiRef){
    nilaiRef = nilaiRef * nilaiRef;
}
