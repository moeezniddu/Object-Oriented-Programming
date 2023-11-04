#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual, also enforces compile time binding    
    /*
    virtual void draw() //Remove virtual to make it early/static/compile time binding
    {
        cout<<"Draw a Shape"<<endl;
    }
    */
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Circle c;
    Square s;

    Shape* shapes[2];
    shapes[0] = &c;
    shapes[1] = &s;

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
    }

    return 0;
}
