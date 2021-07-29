#include <iostream>
#include <array>
#include <algorithm>
// using namespace std;

const size_t arraySize = 10;

void printArr(std::array <int, arraySize> &angka){
    std::cout << "Angka : ";
    for(int &a : angka){
        std::cout << a << " " ;
    }
    std::cout << std::endl;
}void printArr(std::array<char, arraySize> &huruf){
    std::cout << "Huruf : ";
    for(char &a: huruf){
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main(){
    std::array<int, arraySize> angka ={2, 1, 4, 6, 5, 3, 8, 9, 7, 0};
    std::array<char, arraySize> huruf = {'a', 's', 'k', 'w', 'b', 'd', 'c', 'e', 'l', 'p'};
    printArr(angka);
    printArr(huruf);
    
    // sorting array
    std::sort(angka.begin(), angka.end());
    printArr(angka);
    std::sort(huruf.begin(), huruf.end());
    printArr(huruf);


    return 0;
}
