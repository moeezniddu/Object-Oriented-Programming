#include<iostream>
using namespace std;

// Telling compiler sum() is a function template and T is a 
// template parameter uses in function's parameter list and body.
template <class T>
T maxVal(T a, T b){
  if(a > b)
    return a;
  else
    return b;
}

// Telling compiler sum() is also a function template and T is a 
// template parameter uses in function's parameter list and body.
template <class T>
T sum(T a, T b){
  return a + b;
}

int main(){
  cout<<"Maximum Values: "<<endl;
  cout<<maxVal(5,7)<<endl;
  cout<<maxVal(5.8,5.7)<<endl;
  cout<<maxVal("Ali","Ahmad")<<endl;

  cout<<endl<<"Adding/Concatenating Values: "<<endl;
  //char* a = "Ali";    // invalid operands of types 'char*' 
  //char* b = " Ahmad"; // and 'char*' to binary 'operator +'  
  
  // string type support concatenate
  string a = "Ali"; 
  string b = " Ahmad"; 
  cout<<sum(a,b)<<endl;

  return 0;
}
