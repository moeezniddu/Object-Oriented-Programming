#include <iostream>
using namespace std;

/*
    1. Syntax Error (Compile Time Error)
    2. Logical Error (Program give wrong output) 
    3. Runtime Error (Unusual condition called exception)
        - Terminates program abnormally.
        - Exception Handling handle these exceptions.
        Two Type:
        i)  Synchronous (Array Index out of bound, Overflow)
            This can be handle by Exception handling
        ii) Asynchronous (Out of program i.e Keyboard issue etc.)
            This cannot be handle by Exception handling

        Exception hanldling Mechanism perform
        i)   Hit the exception      (Identify and find exception)
        ii)  Throw the Exception    (Throws)
        iii) Catch the exception    (Catch it)
        iV)  Handle the exception   (Handle)
*/          

int main()
{
    int a =10, b = 0;
    try
    {
        if (b == 0)
        {
            throw b; //In Java, exceptions are automatically thrown by the Java runtime or by program's code when an exceptional condition occurs. 
        }
        cout << "Result: " << a / b << endl;
    }
    catch (int val)
    {
        cerr << "Error (Divide by Zero): " << val << endl;
    }

}