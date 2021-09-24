#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template<typename T, typename U>
auto max(T a, U b){
    return (a > b) ? a:b;
}

int main(){
    int a = 1098;
    string b = "hello world!";
    double c = 102.01929;
    float d = 3.14f;

    auto e = max(a, c);

    cout << a << " type : " << typeid(a).name() << endl;
    cout << b << " type : " << typeid(b).name() << endl;
    cout << c << " type : " << typeid(c).name() << endl;
    cout << d << " type : " << typeid(d).name() << endl;
    cout << e << " type : " << typeid(e).name() << endl;
    cin.get();
    return 0;
}
