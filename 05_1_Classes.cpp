#include<iostream>
using namespace std;

class Student{
    private:
        int rollNo;
        string name;
    public:
        Student(){
            rollNo = 0;
            name = "Not Set";
        }

        Student(string name){
            this->rollNo = 0;
            this->name = name;
        }


        void setRollNo(int rollNo){
            this->rollNo = rollNo;
        }
        void setName(string name){
            this->name = name;
        }

        int getRollNo(){
            return rollNo;
        }
        string getName(){
            return name;
        }

};

int main()
{
    Student std1("Alice");
    std1.setName("Bob");
    cout<<"\nName: "<< std1.getName();
    return 0;
} 