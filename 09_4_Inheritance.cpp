#include<iostream>
using namespace std;

class A{
    public:
        int b;
    void printt(){
     cout<<b;
    }
};

class B: public A{
    public:
    int b;
    B(){b = 10;}
    void print(){
        cout<<b<<endl;
        A::printt();
        this->printt();
    }
};

int main(){
    B b;
    b.b = 50;
    b.A::b = 30;
    b.print();
}
