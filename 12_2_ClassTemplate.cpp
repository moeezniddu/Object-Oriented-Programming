    #include<iostream>
using namespace std;

template <class T>
class Person{
  T value;

  public:
  Person(T value){
    this->value = value;
  }

  public:
  void setValue(T value){
    this->value = value;
  }

//  T getValue(){
//    return value;
//  }
T getValue();
  
};

template <class T>
T Person <T>::getValue(){
  return value;
}


int main(){
  Person<string> p("Ali");
  cout<<p.getValue()<<endl;
  p.setValue("Ahmad");
  cout<<p.getValue()<<endl;

  return 0;
}
