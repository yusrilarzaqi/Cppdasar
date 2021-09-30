#include <iostream>
#include <array>
#include <exception>
using namespace std;

int main(){
    array<int, 5>data = {0, 1, 2, 3, 4};
    try{
        cout << data.at(5) << endl;
    }catch(exception &e){
        cout << e.what() << endl;
     }
    
    cout << "end of line " << endl;
    cin.get();
    return 0;
}



