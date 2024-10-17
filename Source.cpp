#include "Header.h"

using namespace std;

A::A() : a(0), c(0) {}

A::A(int a1, double c1) : a(a1), c(c1) {}

int A::GetA() const { return a; }

double A::GetC() const { return c; }

void A::Output(ostream& os) const 
{
    os << GetA() << endl;
    os << GetC() << endl;
}

B::B() : b(0) {}

B::B(double b1) : b(b1) {}

double B::GetB() const { return b; }

void B::Output(ostream& os) const 
{
    os << GetB() << endl;
}

template<class T1, class T2>
Test<T1, T2>::Test() : a(T1()), b(T2()) {}

template<class T1, class T2>
Test<T1, T2>::Test(T1 a1, T2 b1) : a(a1), b(b1) {}

template<class T1, class T2>
Test<T1, T2> Test<T1, T2>::operator+(Test& obj2) 
{
    cout << "Test +\n";
    Test rez(a + obj2.a, b + obj2.b);
    return rez;
}

template<class T1, class T2>
void Test<T1, T2>::Show() 
{
    cout << "A - "; a.Output(cout);
    cout << "B - "; b.Output(cout);
}

template class Test<A, B>;
