// #include <iostream>
#include "bersama.h"
#include "foo.h"
#include "bar.h"
// #define FOO "Foo main.cpp"


/*
#ifdef FOO
#define FOO "Foo jika ada"
#else
#define FOO "Foo jika tidak ada"
#endif


// artinya ialah jika FOO ada 
#ifndef FOO
// lakukan ini
#define FOO "foo baru"
#endif
*/



// pragma once



using namespace std;
int main(){

    Mahasiswa yusril;
    yusril.NIM = 185512;
    cout << yusril.NIM << endl;
    cin.get();
    return 0;
}
