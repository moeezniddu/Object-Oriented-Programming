#include <iostream>
using namespace std;

class Shape
{
public:
    //virtual void draw() = 0; //pure virtual to make it abstract class, also compile time binding 
    virtual void draw() //Remove virtual to make it early/static/compile time binding
    {
        cout<<"Draw a Shape"<<endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout<<"Draw a Circle"<<endl;
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout<<"Draw a Square"<<endl;
    }
};

int main()
{
    Shape *shapes[3];
    shapes[0] = new Circle();
    shapes[1] = new Square();
    for (int i = 0; i < 2; i++)
    {
        shapes[i]->draw();
    }

    Shape s;
    cout<<sizeof(s); // Size of object increased by 4 Bytes
                     // As when virtual is used, object add
                     // a pointer, which points to vtable.
    return 0;
}
