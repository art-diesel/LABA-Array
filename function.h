#include <iostream>
#include <stdexcept>
#include <random>

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
void FillArray(double* arr,int32_t n){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(0,n);
    for (int32_t i = 0;i < n;++i){
        arr[i] = dist(gen);
    }
    

}