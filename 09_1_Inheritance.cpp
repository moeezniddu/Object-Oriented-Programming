#include <iostream>
using namespace std;
#define size 10

class Super {
    protected:
    int value;
    
    public:
    void put(int val) { 
        value = val; 
    }    
    int get(void) { 
        return value; 
    }
};
class Sub: public Super{
    void print(){
        //int value = Super::get(); //In case value is private in Super Class
        cout<<"Value: "<<value;
    }
    public:
    void put(int val) { 
        //Super::put(val); //In case value is private in Super Class
        value = val; 
    }    
    int get(void) { 
        //int value = Super::get(); //In case value is private in Super Class
        return value; 
    }
};

int main(void) 
{
    //Super obj;
    Sub obj;
    obj.put(100);
    obj.put(obj.get() + 1);
    cout<<obj.get();
    return 0;
}