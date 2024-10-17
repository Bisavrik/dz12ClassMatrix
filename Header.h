#ifndef HEADER_H
#define HEADER_H

#include<iostream>

using namespace std;

class A 
{
    int a;
    double c;
public:
    A();
    A(int a1, double c1);
    int GetA() const;
    double GetC() const;
    void Output(ostream& os) const;
};

class B 
{
    double b;
public:
    B();
    B(double b1);
    double GetB() const;
    void Output(ostream& os) const;
};

template<class T1, class T2>
class Test 
{
    T1 a;
    T2 b;
public:
    Test();
    Test(T1 a1, T2 b1);
    Test operator+(Test& obj2);
    void Show();
};

#endif
