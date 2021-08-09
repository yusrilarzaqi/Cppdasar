#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(){
    fstream myFile;
    int hasil;
    myFile.open("data.bin", ios::in | ios::binary);
    
    myFile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));
    cout << "jumlah size : " << sizeof(hasil) << endl;
    cout << hasil << endl;

    return 0;
}
/*  myFile.open("data.bin", ios::out | ios::binary);
    myFile.write(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    myFile.close();
*/
