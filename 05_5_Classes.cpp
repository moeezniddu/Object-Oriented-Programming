#include<iostream>
using namespace std;

class A
{
    private:
        int x;
        int y;

    public:
        int fun1(const int & a, int & b);
        void fun2(int & a, int b) const;
        void print();
};

//var2 = 6, var3 = 10
int A::fun1(const int & v1, int & v2)
{
    //v1 = x;
    x = v1;
    y = v2;
    return x+y;
}

 //var1=16. var2=6, var3 =10
 //v1 = 10, v2 = 6
 // v1=16

void A::fun2(int & v1, int v2) const
{
    //x = v1;
    v1 = x;
    v2 = y;
}

void A::print()
{
    cout<<endl<<x<<endl<<y<<endl;
}

int main()
{
    A obj;
    int var1 = 3, var2=6, var3=10;
    var1 = obj.fun1(var2, var3);
    cout<<endl<<var1<<endl<<var2<<endl<<var3<<endl;
    cout<<"________________________";

    obj.print();
    
    //var1=16. var2=6, var3 =10
    obj.fun2(var3, var2);     //10, 6
    cout<<endl<<var1<<endl<<var2<<endl<<var3<<endl;
    return 0;
} 