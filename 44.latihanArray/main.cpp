#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 10>nilai;

    cout << "====PROGRAM=GRAFIK=NILAI====" << endl << endl;

    for(int i=0; i <= nilai.size(); i++){
        cout << "jumlah nilai dari ";
        if(i == 0){
            cout << "0-9     : ";
        }else if(i == 10){
            cout << "100     : ";
        }else{
            cout << i*10 << " - " << i*10+9 << " : ";
        }
        cin >> nilai[i];
    }

    for(int i=0; i <= nilai.size(); i++){
      if(i == 0){
            cout << "0-9     : ";
        }else if(i == 10){
            cout << "100     : ";
        }else{
            cout << i*10 << " - " << i*10+9 << " : ";
        }
      for(int b=0; b <= nilai[i]; b++){
          cout << "*";
        }
      cout << endl;
    }


    return 0;
}
