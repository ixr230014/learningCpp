#include <iostream>

void SetValue(int arg){
    std::cout << "agr's addr is : " << &arg << std::endl;
    arg = 9999;
}