#include <iostream>
#include <stdexcept>
#include "variant7.h"
#include "variant19.h"

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
        SortArray(arr,n);
        OutputArray(arr,n);
        cout << '\n' << "Max modular element:" << MaxMinElements(arr,n);
        cout << '\n' << "Sum elements = " << SumElements(arr,n);
        cout << '\n' << "Number of positiv elements:" << PositivElements(arr,n);
    }
    catch(const char* e){
        cout << e;
    }





    return 0;
}