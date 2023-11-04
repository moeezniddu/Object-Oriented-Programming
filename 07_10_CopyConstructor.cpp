#include <iostream>
using namespace std;

class MyClass {
    public:
    int value;

    // Default constructor
    MyClass() {
        value = 0;
    }

    // Copy constructor
    MyClass(const MyClass& other) {
        value = other.value;

    }
};

int main() {
    // Create an instance of MyClass
    MyClass obj1;
    obj1.value = 10;

    // Create a new instance of MyClass using the copy constructor
    MyClass obj2 = obj1;
    //MyClass obj2(obj1);

    // Output the values of both objects
    cout << "obj1.value: " << obj1.value <<endl;
    cout << "obj2.value: " << obj2.value <<endl;

  return 0;
}
