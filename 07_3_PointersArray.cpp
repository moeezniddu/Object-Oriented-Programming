#include <iostream>
using namespace std;
#define size 10

int main() 
{    
    //int size = 10; //Also this
    int array1[size] = {}; // {}  for initilizing all with 0
    int *array2 = new int[size];

    cout<<endl;
    for(int i=0; i<size; i++)    
        cout<<array1[i]<<" ";

    for(int i=0; i<size; i++)    
        array2[i] = 0;

    cout<<endl;
    for(int i=0; i<size; i++)    
        cout<<*(array2 + i)<<" ";
        //cout<<iPtr[i]<<" ";

    cout<<endl<<"Before Deletion: "<<*array2;
    delete[] array2;
    cout<<endl<<"After Deletion: "<<*array2;

    return 0;
}