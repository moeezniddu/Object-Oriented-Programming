#include<iostream>
using namespace std;

class Teacher
{
    private:
        float salary;

    public:
        void setSalary(float salary)
        {
            this->salary = salary;
        }

        int getSalary()
        {
            return salary;
        }

        int getSalaryStudent()
        {
            return salary + (salary * 0.1);
        }

};

class Student
{
    private:
        Teacher teacher;

    public:
        float getSalary(Teacher teacher)
        {
            return teacher.getSalaryStudent();
        }
};

int main()
{
    Teacher teacher;
    teacher.setSalary(100000);

    Student std; 
    float salary = std.getSalary(teacher);
    cout<<endl<<salary;
    return 0;
} 