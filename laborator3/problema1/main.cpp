
#include<iostream>
#include "Math.h"
using namespace std;

int main()
{

    cout << Math::Add(4, 25) << endl;
    cout << Math::Add(4, 25, 13) << endl;
    cout << Math::Add(12.5, 2.3) << endl;
    cout << Math::Add(12.5, 2.3, 23.7) << endl;
    cout << Math::Mul(4, 25) << endl;
    cout << Math::Mul(4, 25, 13) << endl;
    cout << Math::Mul(12.5, 2.3) << endl;
    cout << Math::Mul(12.5, 2.3, 23.7) << endl;
    cout << Math::Add(4, 5, 25, 13,7) << endl;
    cout << Math::Add("abcd", "abcd") << endl;
    return 0;
}
