#include <iostream>

using std::cout;
using std::cin;

int32_t PositivElements(double* arr,int32_t n){
    int32_t counter{};
    for (int32_t i = 0;i < n;++i){
        if (arr[i] > 0){
            counter++;
        }
    }
    return counter;
}
