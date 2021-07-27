#include <iostream>
using namespace std;

int main(){
    
    // deklarasi array
    int arrayNilai[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    for(int nilai : arrayNilai ){
        cout << "alamat : " << &nilai;
        cout << " nilai  : " << nilai << endl;
    }
    cout << endl << endl;

    // merubah array
    for(int &nilai : arrayNilai ){
        nilai *= 2;
    }

    for(int &nilai : arrayNilai ){
        cout << "alamat : " << &nilai;
        cout << " nilai  : " << nilai << endl;
    }


    return 0;
}
