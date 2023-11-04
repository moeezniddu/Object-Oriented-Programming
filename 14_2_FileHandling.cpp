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
  // Create ofstream object
  ofstream outfile;  // Create File 
  outfile.open("14_myfile.txt");      // Create File if not exist, 
                                      // Open File, and 
                                      // Attach file to output stream
  outfile.close();                    // Disconnect from stream
  //Here after disconnect, you can connect other files (Many times)

  // Create ifstream object
  ifstream infile;   
  infile.open("14_myfile.txt");      // Open File, and 
                                      // Attach file to input stream
  infile.close();                     // Disconnect from stream

}
