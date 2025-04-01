#include <iostream>
#include <stdexcept>
#include "function.h"

using std::cout;
using std::cin;
using std::logic_error;

int main(){
    int32_t n{};
    double* arr = nullptr;
    try{
        EnterSize(n);
        AllocationArray(arr,n);
        FillArray(arr,n);
    }
    catch(const char* e){
        cout << e;
    }





    return 0;
}