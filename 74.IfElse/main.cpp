#include <iostream>

#define ID 0

#if ID == 0
    #define LANG "Indonesia"
#else
    #define LANG "English"
#endif

using namespace std;

int main(){

    
    cout << "bahasa dipilih : " << LANG << endl;
    cin.get();
    return 0;
}
