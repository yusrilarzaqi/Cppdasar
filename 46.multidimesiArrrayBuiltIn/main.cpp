#include <iostream>
using namespace std;

void prinyArr(int *ptr, int kol, int bar){
    int index = 0;
    for(int i=0; i<bar; i++){
        cout << "[ ";
        for(int j=0; j<kol; j++){
            cout << *(ptr+index) << " ";
            index++;
        }
        cout<< "]" << endl;
    }
}

int main(){
    const int baris = 2;
    const int kolom = 2;
    int array[baris][kolom] = {1, 2, 3, 4};
    
    prinyArr(*array, 2, 2);
    return 0;
}
