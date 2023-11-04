#include<iostream>
using namespace std;

class Student { 
	
	public:
	~Student(){
		counter--;
		cout<<endl<<"-----------Counter Value-----------: "<<counter<<endl;
	}

	Student(){
		counter++;
		name = "Not Set";
	}
		string name;
		static int counter; 
};

int Student::counter;

void method(){
	Student std4; 
	cout<<endl<<"Counter Value: "<<std4.counter; 
}

int main() 
{ 
	cout<<endl<<"Counter Value: "<<Student::counter<<endl; 

	Student std1; 
	cout<<endl<<"Counter Value: "<<std1.counter<<endl; 

	cout<<endl<<"Counter Value: "<<Student::counter<<endl; 

	Student std2;
	cout<<endl<<"Counter Value: "<<std2.counter<<endl; 
	
	Student std3;
	cout<<endl<<"Counter Value: "<<std3.counter<<endl; 
	
	method();
	cout<<endl<<"Counter Value: "<<std1.counter<<endl; 

	return 0; 
} 