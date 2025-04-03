#include <iostream>
#include <cmath>

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
int32_t NegativElements(double* arr,int32_t n){
    int32_t counter{};
    for (int32_t i = 0;i < n;++i){
        if (arr[i] < 0){
            counter++;
        }
    }
    return counter;
}
double SumBetweenNegativElements(double* arr,int32_t n){
    int32_t first{};
    int32_t last{};
    double sum{};
    for(int32_t i = 0;i < n;++i){
        if (arr[i] < 0){
            first = i;
            break;
        }
    }
    for (int32_t i = n -1;i > first;--i){
        if (arr[i] < 0){
            last = i;
            break;
        }
    }
    for (int32_t i = first + 1;i < last;++i){
        sum += arr[i];
    }
    return sum;
}
void InputModularNumber(double& x){
    cout << '\n' << "Enter your modular number (x):";
    cin >> x;

}
void  CompressionArray(double* arr,int32_t n,double x){
   
    int32_t counter = 0;
    for (int32_t i = 0;i < n;++i){
        if (fabs(arr[i]) >= fabs(x)){
            arr[i] = arr[counter];
            counter++;
        }
    }
    for (int32_t i = counter;i < n;++i){
        if (fabs(arr[i]) < fabs(x)){
            arr[i] = 0;
        }
    }
}
void OutputCompressArray(double* arr,int32_t n){
    for (int32_t i = 0;i < n;++i){
        cout << '\n' << arr[i];
    }
}
void FreeMemory(double* arr){
    delete[] arr;
    arr = nullptr;
}