#include<iostream>
using namespace std;

class ComplexNumber{
  int real;
  int comp;

public:
  ComplexNumber(){
    real = 0;
    comp = 0;
  }

  ComplexNumber(int real, int comp){
    this->real = real;
    this->comp = comp;
  }
  
  void print(){
    cout<<endl<<"The Number is: "<<this->real<<"+"<<this->comp<<"i";
  }

  ComplexNumber operator +(ComplexNumber& c){
    ComplexNumber res;
    res.real = this->real + c.real;
    res.comp = this->comp + c.comp;
    return res;
  }
};

int main(){
  ComplexNumber obj1, obj2;
  ComplexNumber obj3 = obj1 + obj2;
  obj3.print();
  return 0;
}
