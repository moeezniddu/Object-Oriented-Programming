#include "stdio.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

int main() 
{

    //malloc() allocates memory, is uninitialized, can contain garbage values (memory allocation)
    int *iPtr = (int*) malloc(5 * sizeof(int)); //5 integer size 
    
    //calloc() allocates memory, is initialized all bits to zero (contiguous allocation)
    //int *iPtr = (int*) calloc(5, sizeof(int)); //5 integer size
    
    *(iPtr+0) = 1;
    *(iPtr+1) = 2;
    *(iPtr+2) = 3;
    *(iPtr+3) = 4;
    *(iPtr+4) = 5;

    for(int i=0; i<5; i++)
    {
        printf("\nValue *(iPtr+1): %d", *(iPtr+i));
        printf("\nValue *(iPtr[i]): %d", iPtr[i]);
    }
    
    printf("\nAddress is %p", iPtr);
    cout<<endl<<"Address is "<<iPtr; //cout formate the address
    cout<<endl<<"Address is "<<iPtr+1;

    int *ptr = (int *)0xffffff;  
    cout<<endl<<"Address is: "<<ptr;
    printf("\nAddress is %016x", iPtr);
    
    // void pointer is pecial type of pointer can hold address of any type of object
    // including pointers to different types. Also called "generic pointer". 
    //void *vPtr = malloc(5 * sizeof(int)); //5 integer size
    //printf("Value is %d", (int*)*vPtr);
 
    return 0;
}
