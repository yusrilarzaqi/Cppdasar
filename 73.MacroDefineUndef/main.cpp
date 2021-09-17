// preprocessing directive
#include <iostream>
// macro merubah nilai dengan nama 
#define PI 3.14
#define BAHASA "Indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B)? A:B) 

// akhir dari preprocessing directive
using namespace std;

// double pi = 3.14;
int main(){
    cout << "bahasa : " << BAHASA << endl;
    cout << "nilai pi : " << PI << endl;
    cout << "max : " << MAX(5,3) << endl;
    cout << "kuatdrat : " << KUADRAT(5) << endl;

    #undef Bahasa

    #define BAHASA "Inggris"
    cout << "bahasa : " << BAHASA << endl;
    return 0;
}