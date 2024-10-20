// Write a C++ Program using copy constructor to copy data of an object to another object.

#include <iostream>
using namespace std;

class Demo {
private:
    int data;

public:
    
    Demo(int value) {
        data = value;
        cout << "Parameterized constructor called! Value is: " << data << endl;
    }

    
    Demo(const Demo &obj) {
        data = obj.data;
        cout << "Copy constructor called! Copied value is: " << data << endl;
    }

    
    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Demo obj1(10);      
    Demo obj2 = obj1;   

    cout << "Displaying obj1 data: ";
    obj1.display();

    cout << "Displaying obj2 data: ";
    obj2.display();

    return 0;
}
