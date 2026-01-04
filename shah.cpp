#include <iostream>

void foo(){

}

int main(){

    int x = 42;
    float y = 72;
    char a = 'a';
    signed char b = 'b';
    unsigned char c = 'c';

    std::cout << "x: " << &x << std::endl;
    std::cout << "x's size: " << sizeof(x) << std::endl;

    std::cout << "y: " << &y << std::endl;
    std::cout << "y's size: " << sizeof(y) << std::endl;

    std::cout << "a: " << &a << std::endl;
    std::cout << "y\a's size: " << sizeof(a) << std::endl;

    std::cout << "b: " << &b << std::endl;
    std::cout << "b's size: " << sizeof(b) << std::endl;

    std::cout << "c: " << &c << std::endl;
    std::cout << "c's size: " << sizeof(c) << std::endl;


    return 0;
}