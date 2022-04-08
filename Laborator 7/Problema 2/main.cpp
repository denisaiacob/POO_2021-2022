#include <stdio.h>
#include <iostream>
#include "Template.h"
using namespace std;

int anotherCallback(int a, int b) {
	return a * 2 + b * 3;
}

int main() {
        Vector <int> v;
        v.push(5);
        v.push(9);
        v.push(2);
        v.push(1);
        v.push(1);
        v.set(12, 5);
        v.insert(30,2);
        v.push(3);
        v.print();
        cout << endl;
        cout << v.pop() << endl;
        cout << v.get(30) << endl;
        cout << v.countMethod()<<endl;
        cout << v.firstIndexOf(12) << endl;
        v.sort(functieDeComparare1);
        v.print();
}