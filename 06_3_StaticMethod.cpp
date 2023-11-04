#include<iostream>
using namespace std;

class Student { 
	private:
		int val = 1; 
		static int counter;
	public:
		int static getCounter(){
			return counter;
		}
		int getVal(){
			return val;
		}
};
int Student::counter = 0;
int main() 
{ 
	Student std; 
	cout<<endl<<"Value: "<<std.getVal(); 
	//cout<<endl<<"Value : "<<Student::val; //Not Possible 
	cout<<endl<<"Value: "<<Student::getCounter(); 
	cout<<endl<<"Value: "<<std.getCounter(); 
	return 0; 
} 