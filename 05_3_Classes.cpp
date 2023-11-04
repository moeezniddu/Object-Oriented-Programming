#include<iostream>
using namespace std;

class A
{
    private:
        int x;
        int y;

    public:
        void print(){
            cout<<endl<<x<<endl<<y;
        }
        void fun();
};

void A::fun()
{
    A obj;
    obj.x = 5;
    obj.y = 10;
    obj.print();
}

int main()
{
    A myobj;
    myobj.fun();
    myobj.print();
    return 0;
} 