#include <iostream>
using namespace std;
#define size 10

class MyClass {
    public:
    MyClass(int a, int b, int c) : x(a), y(b) {
        z = c;
    }

    MyClass(MyClass const &a)
    {
        this->x = a.x;
        y = 0;
        z = a.z + 1;
    }

    int x;
    int y;
    int z;
};

int main(){
    MyClass obj(1,2,3); 
    cout<<"X="<<obj.x<<", Y="<<obj.y<<", Z="<<obj.z;

    MyClass obj2 = obj; 
    cout<<"\nX="<<obj2.x<<", Y="<<obj2.y<<", Z="<<obj2.z;

    MyClass obj3(obj); 
    cout<<"\nX="<<obj3.x<<", Y="<<obj3.y<<", Z="<<obj3.z;

}