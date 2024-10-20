//  Write a C++ program to implement Shallow Copy and deep copy.

#include <iostream>
#include <cstring>
using namespace std;

class Demo {
private:
    char *name;

public:
    
    Demo(const char *n) {
        name = new char[strlen(n) + 1];  
        strcpy(name, n);                 
        cout << "Constructor called! Name is: " << name << endl;
    }

    
    Demo(const Demo &obj) {
        name = obj.name;  
        cout << "Shallow Copy constructor called!" << endl;
    }

    
    Demo(const Demo &obj, bool deepCopy) {
        if (deepCopy) {
            name = new char[strlen(obj.name) + 1]; 
            strcpy(name, obj.name);                 
            cout << "Deep Copy constructor called!" << endl;
        }
    }

    
    void display() {
        cout << "Name: " << name << endl;
    }

   
    ~Demo() {
        delete[] name;  
        cout << "Destructor called!" << endl;
    }
};

int main() {
    
    Demo obj1("ShallowCopy");

    
    Demo obj2 = obj1;  
    cout << "Displaying obj2 (shallow copy) data: ";
    obj2.display();

   
    Demo obj3(obj1, true); 
    cout << "Displaying obj3 (deep copy) data: ";
    obj3.display();

    return 0;
}
