#include <iostream>
using namespace std;
#define size 10
class A {
    public:
        int w;
    protected:
        int x;
    private: 
        int y;
};

class B: private A{
    public:
        void fun(){
            w = 3;
            x = 4;
            //y = 5;
        }
    protected:
        int z;
};

int main(void) 
{
    B objB;
    objB.fun();
    //objB.w = 20;
    //objB.x = 20;
    //objB.y = 20;
    //objB.z = 20; 

    return 0;
}

class C: private B{
    public:
        void fun(){
            //w = 3;
            //x = 4;
            z = 10;
            //y = 5;
        }
};
