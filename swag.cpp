#include <iostream>
#include <cctype>

enum TempUnits{
    CELSIUS = 0,
    FAHRENHEIT = 1
};

float tempConvert(float inputTemp, enum TempUnits f_or_c, char* outputUnit);

int main(void){

    float inputTemp;
    float outputTemp;

    char raw;
    char inputUnit;
    char outputUnit;
    enum TempUnits f_or_c;

    char confirm;

    do {
        std::cout << "What is your temp to be converted?" << std::endl;
        std::cin >> inputTemp;

        std::cout << "Which units? Type 'f' for Fahrenheit " \
        "and 'c' for Celsius" << std::endl;
        std::cin >> raw;

        //lowercase forced conversion
        inputUnit = static_cast<char>(std::tolower(static_cast<unsigned char>(raw)));

        if (inputUnit == 'c') f_or_c = CELSIUS;
        else if (inputUnit == 'f') f_or_c = FAHRENHEIT;

        outputTemp = tempConvert(inputTemp, f_or_c, &outputUnit);
        std::cout << "Given: " << inputTemp << " degrees " << inputUnit << " -> " << outputTemp << " degrees " << outputUnit << std::endl;

        std::cout << "Convert again? (Press any key to continue, or 'Q' to exit.)" << std::endl;
        std::cin >> raw;
        confirm = static_cast<char>(std::tolower(static_cast<unsigned char>(raw)));

    } while (confirm != 'q');
    
    return 0;
}

float tempConvert(float inputTemp, enum TempUnits f_or_c, char* outputUnit){
    switch(f_or_c){
        case CELSIUS:
            *outputUnit = 'f';
            return (inputTemp*(9.0/5.0)) + 32.0;
            break;
        case FAHRENHEIT:
            *outputUnit = 'c';
            return (inputTemp - 32.0)*(5.0/9.0);
            break;
        default:
            std::cout << "Conversion error, try again." <<std::endl;
            return 0.0;
    }
}