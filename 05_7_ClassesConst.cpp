#include<iostream>
using namespace std;

class Class
{
    private:
        int value;

    public:
        Class(){
            value = 100;
        }

        Class(int value){
            this->value = value;
        }

        Class(int value, int b){
            this->value = value + b;
        }

        int getValue()
        {
            return value;
        }
};

int main()
{
    Class a;
    cout<<endl<<a.getValue();

    Class c(50);
    cout<<endl<<c.getValue();
  
    Class d(50,30);
    cout<<endl<<d.getValue();
    return 0;
} 