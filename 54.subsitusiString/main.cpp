#include <iostream>
#include <string>
using namespace std;

int main(){
    // deklarasi & assignment    
    string kalimat1("my name is Yusril");
    string kalimat2("my name is Bimo");

    // menampilkan variable 
    cout << "1 . " << kalimat1 << endl; 
    cout << "2 . " << kalimat2 << endl << endl;

    // kalimat1 swap kalimat2
    cout << endl <<  "Swap String" << endl;
    kalimat1.swap(kalimat2);

    cout << "1 . " << kalimat1 << endl; 
    cout << "2 . " << kalimat2 << endl << endl;


    // replace string
    cout << endl << "Replace String"  << endl;
    // bimo = bomi
    kalimat1.replace(kalimat1.find("imo"), 3, "omi");
    // menganti Yusril menjadi Dimas
    kalimat2.replace(11, 6, "Dimas");

    cout << "1 . " << kalimat1 << endl; 
    cout << "2 . " << kalimat2 << endl << endl;

    // masukan atau menelipkan string
    cout << endl <<  "Insert String" << endl;
    // not bomi
    kalimat1.insert(10, " not");
    cout << "1 . " << kalimat1 << endl; 
    cout << "2 . " << kalimat2 << endl << endl;

    return 0;
}
