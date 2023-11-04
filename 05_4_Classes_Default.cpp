#include<iostream>
using namespace std;

class Student{    
    public:
        int rollNo;
        string name;
        Student(int rollNo = 0, string name = "Not Set"){
            this->rollNo = rollNo;
            this->name = name;
        }
        Student(){}
        Student(int rollN){
            this->rollNo = rollNo;
        }
};

int main()
{
    //Student std1; // Compilation Error. More than one default constructor
    //Student std1(223); //More than one instance of constructor
    Student std1(223, "Alice");
    cout<<"\nRoll No.: "<< std1.rollNo;
    cout<<"\nName: "<< std1.name;
    return 0;
} 