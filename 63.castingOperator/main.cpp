#include <iostream>

using namespace std;

int main(){
    
    // deklarasi & assignment
    int a = 5;
    float b = 6.92f;
    char c = 'd';

    // int + (int)float = int
    cout << a + (int)b << endl;
    
    // int + (int)char = int
    cout << a + (int)c << endl;

    // tampil char dalam int
    cout << (int)c << endl;

    return 0;
}
