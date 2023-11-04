#include <iostream>
using namespace std;

class MyClass {
public:
    int *ptr;
    MyClass() {
        ptr = new int;
        *ptr = 2000;
    }
    ~MyClass() {
        delete ptr;
    }
};

int main() {

    MyClass obj1;
    cout<<*obj1.ptr<<endl;
    *obj1.ptr = 5;

    // Shallow copy
    MyClass obj2 = obj1;
    cout << *obj2.ptr << endl;
    *obj1.ptr = 10;
    cout << *obj2.ptr << endl;

    // Deep copy 
    MyClass obj3;
    *obj3.ptr = *obj1.ptr;
    cout << *obj3.ptr<< endl;  

    *obj1.ptr = 15;
    cout << *(obj3.ptr) << endl;  
    cout << *(obj1.ptr) << endl;  
    cout << *(obj2.ptr) << endl;  

    return 0;
}
