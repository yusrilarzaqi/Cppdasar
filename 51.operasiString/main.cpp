#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // deklarasi variable
    string kata("cat");
    // menampilkan variable kata
    cout << kata << endl;

    // mengambil karakter berdasarkan  index
    cout << "index ke-0 : " << kata[0] << endl;
    cout << "index ke-1 : " << kata[1] << endl;
    cout << "index ke-2 : " << kata[2] << endl;

    // mengubah karakter berdasarkan index
    cout << endl << "merubah kata[0] menjadi e" << endl;
    kata[0] = 'e';

    // menampilkan kata
    cout << kata << endl;
    
    // menyambung str/ concatenation
    string kata2(kata + " pear &");
    
    // menampilkan kata2
    cout << kata2 << endl;

    // menambahkan kata dari belakang (append)
    string kata3(" apple");
    
    // menambahkan kata3 kekata2 
    kata2.append(kata3);

    // menampilkan kata2
    cout << kata2 << endl;

    // cara lain sbb
    string kata4("and kiwi");
    kata2 += " " + kata4;
    
    // menampilkan kata2
    cout << kata2 << endl;
    return 0;
}
