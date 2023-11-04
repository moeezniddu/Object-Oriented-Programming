#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
	
int getStaticValue()
{
	static int val = 0;
	return ++val;
}

int main() 
{ 
	cout<<endl<<"Value: "<<getStaticValue(); 
	cout<<endl<<"Value: "<<getStaticValue(); 
	cout<<endl<<"Value: "<<getStaticValue(); 
	cout<<endl<<"Value: "<<getStaticValue(); 
	//cout<<endl<<"Value: "<<getStaticValue2(); 
	return 0; 
} 