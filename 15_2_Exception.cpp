#include <iostream>
using namespace std;

int main()
{
    int a =10, b = 0;
    try
    {
        if (b == 0)
        {
            throw "Division by zero!!!!";
        }
        cout << "Result: " << a / b << endl;
    }
    catch (const char *msg)
    {
        cerr << "Error: " << msg << endl;
    }

}