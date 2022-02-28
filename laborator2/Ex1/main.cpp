#include <iostream>
#include "NumberList.h"

using namespace std;

int main()
{
    NumberList lista;
    lista.Init();
    lista.Add(5);
    lista.Add(2);
    lista.Add(7);
    lista.Add(1);
    lista.Add(2);
    lista.Print();
    lista.Sort();
    lista.Print();
    return 0;
};