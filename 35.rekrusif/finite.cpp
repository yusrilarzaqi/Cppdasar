#include <iostream>
using namespace std;

// fuc pangkat iterable
int pangkatIter(int a, int b){
    int hasil = a;
    for(int i=1; i<b; i++){
        hasil = hasil * a; 
    }
    return hasil;
}

// func pangkat rekrusif
int pangkatRek(int a, int b){
    if(b <= 1)return a;
    else return a * pangkatRek(a, (b - 1));
}


int main(){
    int a ,b;
    cout << "angka : "; cin >> a;
    cout << "pangkat : "; cin >> b;
    
    cout << "Pangkat Itereble : " << pangkatIter(a,b) << endl;

    cout << "Pangkat Rekrusif : " << pangkatRek(a, b) << endl;
    return 0;
}
