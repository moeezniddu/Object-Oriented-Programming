#include<iostream>
using namespace std;
#define Square(x) x*x // Defining Macro
#define PI 3.14 // Define constant Value
const float PI2 = 3.14; // Define constant Value

//#define DEBUG
int main() 
{
    const float PI2 = 3.14;
    //PI2 = 3.14; //NOt Possible
    cout<<"Square = "<<Square(5)<<endl;
    cout<<"PI Value = "<<PI<<endl;
    
    /*
    #ifdef DEBUG
        cout << "Debugging is enabled." << endl;
    #else
        cout << "Debugging is disabled." << endl;
    #endif
    */
   
    return 0;
}


