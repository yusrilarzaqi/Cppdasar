#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    ifstream myFile;
    string buffer, nama, output;
    int jumlah=0;
    int no;
    bool ulang = true;

    myFile.open("data.txt", ios::in);
    while(ulang){
        getline(myFile, buffer);
        output.append("\n"+buffer);
        if(buffer == "daftar")break;
    }
    // myFile.close();
    cout << output << endl;

    getline(myFile, buffer);
    cout << buffer << endl;
    while(!myFile.eof()){
        myFile >> no;
        myFile >> nama;
        
        jumlah++;
        cout <<  no << "   " << nama << endl;
    }
    cout << "jumlah : " << jumlah << endl;

    return 0;
}
