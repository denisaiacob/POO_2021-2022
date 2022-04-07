
#include<iostream>
#include<stdint.h>
using namespace std;

float operator"" _Kelvin(unsigned long long k) {

    float value = k - 273.15;
    return value;
}

float operator"" _Fahrenheit(unsigned long long f) {

    float value = (f-32) / 1.8;
    return value;
}

int main() {
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    cout << a << "  " << b;
    return 0;

}