#include<iostream>
using namespace std;

class A{
    int v;
    public:
    A(){
        cout<<"Constructor of A"<<endl;
    }

    A(string val){
        cout<<"Constructor of A, "<<val<<endl;
    }
    ~A(){
        cout<<"Destructor of A"<<endl;
    }
};

class B: public A{
    public:
    int v;
    //B(): A(){
    B() {
        cout<<"Constructor of B"<<endl;
    }
    B(string val): A(val){
        cout<<"Constructor of B, "<<val<<endl;
    }
    ~B(){
        cout<<"Destructor of B"<<endl;
    }    
};

int main(){
    A a;
    //B b1;
    B b2("One Argument... ");
    
    cout<<"Size of Parent: "<<sizeof(a)<<endl;
    cout<<"Size of Child: "<<sizeof(b2)<<endl;

}
