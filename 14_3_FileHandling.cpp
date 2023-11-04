#include<iostream>
#include<fstream>
using namespace std;

/*
A stream is a sequence of bytes read from or write to 
a file, a string, or any other input/output device. Represented 
by an object of a stream class ifstream, ofstream, or fstream.

1. ifstream: Reading from a file 
2. ofstream: writing to a file  
3.  fstream: both reading and writing to a file

Streams makes it easier to perform input/output operations, 
as the programmer uses same syntax and functions for reading 
from or writing to input/output devices such as files, strings, 
or standard input/output (cout and cin).

Two ways 
a) Using Constructor function of a class (Used for single file)
b) Using member function open() of a class (Used for multiple files)
*/

int main(){
  ofstream outfile("14_myfile.txt");      
  outfile<<"Ali"<<endl;
  outfile<<"Ahmad"<<endl;
  outfile<<"Khalid"<<endl;
  outfile.close();

  ifstream infile("14_myfile.txt");
  string name;
  
  infile>>name;
  cout<<name<<endl;
  infile>>name;
  cout<<name<<endl;
  infile>>name;
  cout<<name<<endl;

  infile.close();
}
