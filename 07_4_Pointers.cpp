#include "stdio.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

int main() 
{    

    int iVal;
    int *iPtr = &iVal;
    cout<<iPtr<<endl;
    int **dPtr = &iPtr;
    int ***tPtr = &dPtr;
    
    cout<<dPtr<<endl;
    cout<<&iPtr<<endl;
    printf("\nAddress is %p", iPtr);
    cout<<endl<<"Address is "<<iPtr; 
    cout<<endl<<"Value is "<<*iPtr; 
    cout<<endl<<"----------------------"; 

    float fVal = 0.0;
    float *fPtr = &fVal;
    cout<<endl<<"Address is "<<fPtr; 
    cout<<endl<<"Value is "<<*fPtr; 
    cout<<endl<<"----------------------"; 

    //char cVal = 'C';
    //char *cPtr = &cVal;
    //cout << endl << "Address is " << static_cast<void*>(cPtr); // cast the pointer to void* for correct address printing
    //cout << endl << "Value is " << cVal; // print the actual value of cVal
    //cout << endl << "----------------------";
    
    //iPtr = 0;           //Allowed
    //iPtr = NULL;        //Allowed
    return 0;
}
