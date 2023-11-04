#include<iostream>
using namespace std;

class Student{
    private:
        float totalMarks;
        float obtainedMarks;
        float percentage;

    void calculatePercentag(){
            this->percentage = (obtainedMarks/totalMarks)*100;
        }

    public:
        Student()
        {
            totalMarks = 0;
            obtainedMarks= 0;
            percentage =0;

        }
        void setTotalMarks(float totalMarks)
        {
            this->totalMarks = totalMarks;
            calculatePercentag();
        }

        void setObtainedMarks(float obtainedMarks)
        {
            this->obtainedMarks = obtainedMarks;
            calculatePercentag();
        }

        float getTotalMarks()
        {
            return this->totalMarks;
        }

        float getObtainedMarks()
        {
            return this->obtainedMarks;
        }

        float getPercentag(){
            return this->percentage;
        }

};

int main()
{
    Student std1;
    //std1.setTotalMarks(200);
    std1.setTotalMarks(400);
    std1.setObtainedMarks(320);
  
    cout<<"\nTotal Marks: "<< std1.getTotalMarks();
    cout<<"\nObatined Marks: "<< std1.getObtainedMarks();
    
    //std1.calculatePercentag();
    cout<<"\nPercentage: "<< std1.getPercentag();
  
    return 0;
} 