#include "stdio.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

class Student{

    public:
    int value;
    Student(){
        cout<<"\n Constructor Called";
        value = 100;
    }

    ~Student(){
        cout<<"\n Destructor Called";
    }

    void method1(){
        cout<<"\n Print inside Object";
    }
};



int main() 
{
    Student *s = new Student;
    (*s).method1();
    delete s;
    cout<<endl<<s->value;
    return 0;
}
