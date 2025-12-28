#include <iostream>
#include <array>
#include <algorithm>

int main(void){

    /*
    int arr[] = {1,3,5};
    std::array<int,3> arr2{1,3,5};

    //C-style for loop
    for(int i=0; i<arr2.size(); i=i+1){
        std::cout << arr2[i] << std::endl;
    }

    //range-based for loops
    for(int element: arr2){
        std::cout << element << std::endl;
    }
*/
    std::array<int,3> myArray;
    std::fill(std::begin(myArray), std::end(myArray), 1024);

    for(int element: myArray){
        std::cout << element << std::endl;
    }

    return 0;
}