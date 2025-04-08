#include <iostream>
#include <stdexcept>
#include <random>
#include <cmath>

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
    double max{},min{};
    cout << '\n' << "Enter your distanse:";
    cout << '\n' << "Enter your min element:";
    cin >> min;
    cout << '\n' << "Enter your max element:";
    cin >> max;
    if (min >= max){
        throw std::logic_error("Min >= Max");
    } 
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(min,max);
    for (int32_t i = 0;i < n;++i){
        arr[i] = dist(gen);
    }
}
int32_t CheckQuantity(double* arr,int32_t n,double temp){
    int32_t counter{};
    for (int32_t i = 0;i < n;++i){
        if(arr[i] == temp){
            counter++;
        }
    }
    return counter;
}
void SortArray(double* arr,int32_t n){
    for (int32_t i = 0;i < n - 1;++i){
        for (int32_t k = 0;k < n -i - 1;++k){
            int32_t a = CheckQuantity(arr,n,arr[k]);
            int32_t b = CheckQuantity(arr,n,arr[k + 1]);
            if(a < b){
                std::swap(arr[k],arr[k + 1]);
            }
            else if (a < b || arr[k] < arr[k + 1]){
                std::swap(arr[k],arr[k + 1]);
            }
        }
    }
}
void OutputArray(double* arr,int32_t n){

    for (int32_t i = 0;i < n;++i){
        cout << '\n' << arr[i];
    }
}
double MaxMinElements(double* arr,int32_t n){
    
    double max = arr[0];
    for (int32_t i = 0;i < n;++i){
        if (std::fabs(max) < std::fabs(arr[i])){
            max = arr[i];
        }
    }
    return max;
}
double SumBetweenPositivElements(double* arr,int32_t n){
    int32_t first{};
    int32_t second{};

    double sum{};
    for (int32_t i = 0;i < n;++i){
        
        if (arr[i] > 0){
            first = i;
            break;
        }
    }
    for (int32_t i =first + 1;i < n;++i){
        if (arr[i] > 0){
            second = i;
            break;
        }
     }
    for (int32_t i = first + 1;i < second;++i){
            sum += arr[i];
            if (first == second){
                return 0;
            }
    }
    
    return sum;
}