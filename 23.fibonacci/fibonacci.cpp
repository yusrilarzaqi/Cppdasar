#include <iostream>
using namespace std;
int main(){
    /*loop{
     *  f(n) = f(n-1) +f(n-2)
     * }*/
    int n, f_n, f_n1, f_n2;

    cout << "====FIBONACCI====" << endl;
    cout << ">> ";cin >> n;

    f_n1=1;f_n2=0;f_n=f_n2+f_n1;
    cout << f_n ;
    for(int i = 1;i <= n; i++){
        f_n = f_n2 + f_n1;
        f_n2 = f_n1;f_n1 = f_n;
        cout << f_n ;
    }
    cout << "\n";
    
    return 0;
}
