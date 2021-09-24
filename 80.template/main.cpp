#include <iostream>
#include <string>
using namespace std;

template<typename T>
void print(T data){
    cout << data << endl;
}

template <typename T>
int toint(T a){
    return int(a);
}

template<typename T, typename U>
T max(T a, U b){
    return (a > b) ? a:b;
}

int main(){

    print(10209);
    print(103.103993);
    print('h');
    print("hello");

    cout << toint(10.21) << endl;
    cout << max(10.2, 10) << endl;

    print<int>(2002);
    cout << max<double, int>(10.4, 10.9) << endl;

    cin.get();
    return 0;
}


