#include<iostream>
using namespace std;

class MyClass {
public:
    MyClass(){
      value = 0;
    }
    MyClass& operator++() {
        // increment the value of the object
        value++;
        // return a reference to the object
        return *this;
    }
    int value;
};

int main(){
  MyClass a;
  cout<<a.value<<endl;
  ++a;
  cout<<a.value<<endl;
  return 0;
}
