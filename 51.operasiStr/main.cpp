#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string kata("cat");
    cout << kata << endl;

    // mengambil karakter berdasarka  index
    cout << "index ke-0 : " << kata[0] << endl;
    cout << "index ke-1 : " << kata[1] << endl;
    cout << "index ke-2 : " << kata[2] << endl;
    cout << "index ke-3 : " << kata[3] << endl;

    // mengubah karakter berdasarkan index
    kata[0] = 'e';
    cout << kata << endl;
    
    // menyambung str/ concatenation
    string kata2(kata + " pear &");
    cout << kata2 << endl;

    string kata3(" apple");
    kata2.append(kata3);
    cout << kata2 << endl;

    string kata4("and kiwi");
    kata2 += " " + kata4;
    cout << kata2 << endl;
    return 0;
}
