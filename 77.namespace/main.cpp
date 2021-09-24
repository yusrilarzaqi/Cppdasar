#include <iostream>
#include "library.h"

void fungsi_biasa(){
    std::cout << "ini fungsi dari main.cpp" << std::endl;
}

using namespace test;
int main(){
    
    fungsi_biasa();
    test::fungsi();
    test::cout(1982);;
    std::cin.get();
    return 0;
}
