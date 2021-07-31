#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string kalimat1("hari ini makan apel dan pir");
    string kalimat2("belajar basic cpp");
    
    cout << kalimat1 << endl;
    cout << kalimat2 << endl;

    cout << kalimat1.substr(9, 6) <<endl;
    cout << kalimat2.substr(8, 6) <<endl;

    cout << kalimat1.find("apel") << endl;
    cout << kalimat2.find("cpp") << endl;

    int a;
    a = kalimat1.find("an");
    cout << a << endl;

    return 0;
}
