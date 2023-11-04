#include <iostream>
using namespace std;
#define size 10

int main() 
{    
    string *arr = new string[size];

    cout<<endl;
    for(int i=0; i<size; i++)    
        cout<<arr[i]<<" ";

    for(int i=0; i<size; i++)    
        arr[i] = to_string(i+1);

    cout<<endl;
    for(int i=0; i<size; i++)    
        cout<<*(arr + i)<<" ";

    cout<<endl<<"Before Deletion: "<<*arr; //Pointing to First Element
    delete[] arr;
    cout<<endl<<"After Deletion: "<<*arr;

    return 0;
}