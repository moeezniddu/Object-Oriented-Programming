#include <iostream>
using namespace std;

class A
{
public:
    int a;
};

class B :  virtual public A //remove virtual to see compilation error
{
public:
    int b;
};

class C : virtual public A //remove virtual to see compilation error
{
public:
    int c;
};

class D : public B, public C
{
public:
    int d;
};

int main()
{
    D d;
    d.a = 4;
    d.b = 1;
    d.c = 2;
    d.d = 3;
    cout<<"  "<<d.a<<"  "<<d.b<<"  "<<d.c<<"  "<<d.d;
    return 0;
}
