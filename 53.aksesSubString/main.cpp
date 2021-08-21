#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // deklarasi / assignment
    string kalimat1("hari ini makan apel dan pir anjay");
    string kalimat2("belajar basic cpp");
    
    // menampilkan
    cout << kalimat1 << endl;
    cout << kalimat2 << endl;

    // mengambil dari index (sliceing) 
    cout << kalimat1.substr(9, 6) << endl;
    cout << kalimat2.substr(8, 6) << endl;

    // mencari index pertama dari kata 
    cout << kalimat1.find("apel") << endl;
    cout << kalimat2.find("cpp") << endl;

    // deklarasi variable a
    int a;
    // assingnment
    // index an ke1
    a = kalimat1.find("an");

    cout << endl;
    cout << a << endl;
    // mencari index an ke2 
    // ..find("kalimat", index an1 + 1 )
    cout << kalimat1.find("an", a + 1) << endl;

    // mencari index "an" dari belakang rfind = reverse find 
    cout << kalimat1.rfind("an") << endl;

    return 0;
}
