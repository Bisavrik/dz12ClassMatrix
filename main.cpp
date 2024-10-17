#include "Header.h"
#include <iostream>
#include <cstdlib>

int main() 
{
    Test<A, B> obj1(A(1, 2.4), B(7.9));
    Test<A, B> obj2(A(2, 3.6), B(2.2));
    Test<A, B> rez = obj1 + obj2;
    rez.Show();
    system("pause");
    return 0;
}
