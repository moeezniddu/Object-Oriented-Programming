#include<iostream>
using namespace std;

class Class
{
    public:
        int value;
        Class(){
        }

        ~Class(){
        }
};

int main()
{
    Class a[10];

    for(int i=0; i<10; i++)
    {
        cout<<endl<<a[i].value;
    }

    return 0;
} 