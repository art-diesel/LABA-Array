#include <iostream>
#include <stdexcept>

using std::cout;
using std::cin;
using std::logic_error;

void EnterSize(int32_t& n){
    cout << "Enter your size:" << '\n';
    cin >> n;
    if (n <= 0){
        throw std::logic_error("logic error");
    }
}
void AllocationArray(double*& arr,int32_t n){
    arr = new double[n];
}
