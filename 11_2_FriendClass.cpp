#include<iostream>
using namespace std;

class Person {
  friend class FriendClass;

  private:
    string name = "Nothing";
  public:
    string getName(){
      return name;
    }
};

class FriendClass {
    public:
    void setName(Person& p, string name){
        p.name = name;
    }

    string getName(Person& p){
        return p.name;
    }
};

int main(){
  Person p;
  FriendClass friendobj;
  cout<<p.getName()<<endl;
  friendobj.setName(p, "Ali");
  cout<<friendobj.getName(p)<<endl;
  return 0;
}
