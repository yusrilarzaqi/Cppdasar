#include <iostream>
using namespace std;
// func prototype
double volume_kubus(double p=1, double l=1, double t=1);

// func main
int main(){
    cout << "Volume kubus (2,3,4) :" << volume_kubus(2,3,4) << endl;
    cout << "Volume kubus (2,3,1) :" << volume_kubus(2,3) << endl;
    cout << "Volime kubus (2,1,1) :" << volume_kubus(2) << endl;
    cout << "Volume kubus (1,1,1) :" << volume_kubus() << endl;

    return 0;
}
// default func 
double volume_kubus(double p, double l, double t){
    return p * l * t;    
}
