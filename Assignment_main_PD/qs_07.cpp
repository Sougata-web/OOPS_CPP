// Write a C++ program to demonstrate the execution of constructor and destructor.

#include<iostream>
using namespace std;

class Demo{
    public:
        Demo(){
            cout<<"Constructor is called!"<<endl;
        }
        ~Demo(){
            cout<<"Destructor is called!"<<endl;
        }
};

int main(){
    cout << "Creating object of Demo class" << endl;
    Demo obj;  

    cout << "Exiting the main function" << endl;
    
    return 0;
}