#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;
    
    Singleton() { } // Private constructor to prevent instantiation outside the class
    
public:
    string name = "ABC";
    static Singleton* getInstance() {
        if (instance == NULL) {
            instance = new Singleton();
        }
        return instance;
    }
};

Singleton* Singleton::instance = NULL; // Initialize the instance pointer to NULL

int main(){
    // Example usage
    Singleton* obj = Singleton::getInstance();
    cout<<obj->name;
}