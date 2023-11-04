#include<iostream>
using namespace std;

class ArrayValue{
public:
  int* values;
  int size;

  ArrayValue(int size){
    this->size = size;
    values = new int[size];
    for(int i=0; i<size; i++){
      values[i] = i + 1;      
    }
  }
  
  void print(){
    cout<<"Valuse are: "<<endl;
    for(int i=0; i<size; i++){
      cout<<this->values[i]<<" ";      
    }
  }

  void operator=(ArrayValue& obj){
    //values = new int[obj.size];
    this->values = new int[obj.size];
    for(int i=0; i<size; i++){
      values[i] =  obj.values[i];      
    }
  }
};

int main(){
  ArrayValue obj1(10);
  obj1.values[5] = 66;
  ArrayValue obj2 = obj1;
  obj2.print();
  return 0;
}
