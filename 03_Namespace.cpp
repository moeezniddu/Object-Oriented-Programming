#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

namespace A
{
	int x = 10;
}

int main()
{
	cout<<A::x;
}