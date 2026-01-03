#include <iostream>
#include <string>

float tempConv(float inputTemp, char unit){
    
}

int main(void){

    float inputTemp;
    char unit;

    std::cout << "What is your temp to be converted?" << std::endl;
    std::cin >> inputTemp;

    std::cout << "Which units? Type 'f' for Fahrenheit "
    "and 'c' for Celsius" << std::endl;
    std::cin >> unit

    std::cout << "Debug: entered temp was " << inputTemp << std::endl;
    std::cout << "Debug: entered unit was " << unit << std::endl;

    return 0;
}