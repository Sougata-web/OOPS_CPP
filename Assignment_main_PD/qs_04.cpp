// Write a C++ Program to design a class having static member function named showcount() 
// which has the property of displaying the number of objects created of the class.

#include<iostream>
using namespace std;

class MyClass{
    private:
        static int objectCount;
    public:
    MyClass(){
        objectCount++;
    }

    static void showCount(){
         cout << "Number of objects created: " << objectCount << endl;
    }
};

int MyClass::objectCount=0;

int main(){

    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    MyClass::showCount();
    
    
    return 0;
}