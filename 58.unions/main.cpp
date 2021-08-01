#include <iostream>
#include <string>
using namespace std;

union data{
    int a;
    char b[3];
};

int main(){
    
    data test;
    test.a = 102829;
    cout << "test.a : " << test.a << endl;
    cout << "test.b : " << test.b << endl;

    test.b[0] = 'b';
    test.b[1] = 'i';
    test.b[2] = 'm';
    test.b[3] = 'o';

    cout << "test.a : " << test.a << endl;
    cout << "test.b : " << test.b << endl;



    return 0;
}
