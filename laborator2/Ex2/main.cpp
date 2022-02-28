#include <iostream>
#include "Student.h"
#include"Global.h"

using namespace std;

int main()
{
    Student s1, s2;
    s1.setName("Ana");
    s2.setName("Maria");
    std::cout << CompareName(&s1,&s2) << endl;
    s1.setMath(5.1);
    s2.setMath(5.2);
    std::cout << CompareMath(&s1,&s2) << endl;
    s1.setEnglish(9.5);
    s2.setEnglish(8.3);
    std::cout << CompareEnglish(&s1,&s2) << endl;
    s1.setHistory(7.5);
    s2.setHistory(7.5);
    std::cout << CompareHistory(&s1, &s2) << endl;
    std::cout << s1.Average() << endl;
    std::cout << s2.Average() << endl;
    std::cout << CompareAverage(&s1,&s2) << endl;

    return 0;
}
