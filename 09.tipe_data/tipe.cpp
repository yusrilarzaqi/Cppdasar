#include <iostream>
using namespace std;

int main(){
   // bilangan bulat
   // int a = 10;// 32-bit
   // long a =999; 64-bit
   // short a = 2;
   
   // bilangan decimal
   // float a = 1.0; 32-bit
   // double a = 20.2 64-bit


    //character
    // char a = 'b';
    
    // boolean
    bool a = true;

   cout << a << endl;
   cout << sizeof(a) << "byte" << endl;
   cout << numeric_limits<bool>::max() << endl;
   cout << numeric_limits<bool>::min() << endl;
   cin.get();
   return 0;
  
}

