#include <iostream>
using namespace std;

class A
{
public:
    A(){
        cout<<"*** Constructor of A is called ***"<<endl;
    }
};

class B : public A //remove virtual to see changes
//class B : virtual public A //remove virtual to see changes
{
public:
    B(){
        cout<<"Constructor of B is called"<<endl;
    }
};

class C : public A //remove virtual to see changes
//class C : virtual public A //remove virtual to see changes
{
public:
    C(){
        cout<<"Constructor of C is called"<<endl;
    }
};

class D : public B, public C
{
public:
    D(){
        cout<<"Constructor of D is called"<<endl;
    }};

int main()
{
    D d;
    return 0;
}
