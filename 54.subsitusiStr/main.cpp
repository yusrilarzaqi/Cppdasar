#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string kalimat1("my name is Yusril");
    string kalimat2("my name is Bimo");

    cout << "1 . " << kalimat1 << endl; 
    cout << "2 . " << kalimat2 << endl << endl;

    cout << "Swap String" << endl;
    kalimat1.swap(kalimat2);

    cout << "1 . " << kalimat1 << endl; 
    cout << "2 . " << kalimat2 << endl << endl;


    cout << "Replace String"  << endl;
    kalimat1.replace(kalimat1.find("imo"), 3, "omi");
    kalimat2.replace(11, 6, "Dimas");

    cout << "1 . " << kalimat1 << endl; 
    cout << "2 . " << kalimat2 << endl << endl;

    cout << "Insert String" << endl;
    kalimat1.insert(10, " not");
    cout << "1 . " << kalimat1 << endl; 
    cout << "2 . " << kalimat2 << endl << endl;



    return 0;
}
