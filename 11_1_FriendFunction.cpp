#include<iostream>
using namespace std;

class Person {
  private:
    string name = "Nothing";
  public:
    friend int friendFunction(Person&);
    //int memberFunction(Person&);

    string getName(){
      return name;
    }
};

int friendFunction(Person& p){
    p.name =  "Value set by Friend Function";
}

//int Person::memberFunction(Person& p){
//    p.name =  "Value set by Member Function";
//}

int main(){
  Person p;
  cout<<p.getName()<<endl;
  friendFunction(p);
  cout<<p.getName()<<endl;
  //p.memberFunction(p);
  //cout<<p.getName()<<endl;
}
