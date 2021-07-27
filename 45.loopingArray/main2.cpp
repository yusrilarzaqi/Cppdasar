#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 10>arrayNilai = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for(int nilai : arrayNilai){
        cout << "nilai : " << nilai;
        cout << " " << &nilai << endl;
    }
    for(int &nilai : arrayNilai){
        nilai *= 3;
    }
    for(int &nilaiRef:arrayNilai){
        cout << "nilai : " << nilaiRef;
        cout << " " << &nilaiRef << endl;
    }
    return 0;
}
