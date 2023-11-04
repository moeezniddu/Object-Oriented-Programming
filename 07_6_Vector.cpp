#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> vec;

    // Add elements to the vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // Access elements of the vector
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    
    // Add more elements to the vector
    vec.push_back(4);
    vec.push_back(5);
    cout<<endl;
    // Access elements of the vector again
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }

    return 0;
}
