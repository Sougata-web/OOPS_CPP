//  Write a C++ program to implement the exception handling with re throwing in exception.

#include <iostream>
using namespace std;

void division(int num1, int num2) {
    try {
        if (num2 == 0) {
            throw "Division by zero error";  
        }
        else {
            float result = (float)num1 / num2;
            cout << "Result: " << result << endl;
        }
    } 
    catch (const char* msg) {
        cout << "Caught in function: " << msg << endl;
        throw;  
    }
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    try {
        division(a, b);  
    } 
    catch (const char* msg) {
        cout << "Caught in main: " << msg << endl;
    }

    cout << "Program execution continues after exception handling." << endl;

    return 0;
}
