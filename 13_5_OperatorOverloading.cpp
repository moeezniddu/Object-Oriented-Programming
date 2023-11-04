#include<iostream>
using namespace std;

class MyArray {
private:
    int arr[10];

public:
    MyArray(){
      for(int i=0; i<10; i++){
        arr[i] =  i+1;
      }
    }
    int& operator[](int index) {
        if (index < 0 || index >= 10) {
          exit(1);
        }
        return arr[index];
    }
};

int main(){
  MyArray a;
  a[0] = 11111;
  
  for(int i=0; i<10; i++){
    cout<<a[i]<<" ";
  }
  int x = a[0];
  
  return 0;
}
