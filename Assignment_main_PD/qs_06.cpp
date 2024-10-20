//  Write a C++ Program to find Maximum out of Two Numbers using friend function.
// [Note: Here one number is a member of one class and the other number is member of 
// some other class.]

#include <iostream>
using namespace std;

class Class1;  

class Class2 {
private:
    int num2;  

public:
    
    Class2(int n) : num2(n) {}

    
    friend int findMax(Class1, Class2);
};

class Class1 {
private:
    int num1;  

public:
    
    Class1(int n) : num1(n) {}

    
    friend int findMax(Class1, Class2);
};


int findMax(Class1 c1, Class2 c2) {
    if (c1.num1 > c2.num2)
        return c1.num1;
    else
        return c2.num2;
}

int main() {
    
    Class1 obj1(25);  
    Class2 obj2(40);  
    
    int maximum = findMax(obj1, obj2);

    cout << "The maximum of the two numbers is: " << maximum << endl;

    return 0;
}
