#include <iostream>
using namespace std;

// func luas
int luas(int p, int l){
    return p *l ;
}

// overload 1
int luas(int s){
    return s * s ;
}

// overloas 2
double luas(double p, double l){
    return p * l ;
}

// func main
int main(){
    cout << "Hasil dari 2 x 3 : " << luas(2,3) << endl;
    cout << "Hasil dari 2 x 2 : " << luas(2) << endl;
    cout << "Hasil dari 2.5 x 2.5 : " << luas(2.5, 2.5) << endl;
    
    return 0;
}
