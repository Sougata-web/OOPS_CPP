//  Write a C++ program to implement the exception handling with multiple catch statements

#include <iostream>
using namespace std;

int main() {
    try {
        int num1, num2;
        cout << "Enter two integers: ";
        cin >> num1 >> num2;

        if (num2 == 0) {
            throw "Division by zero is not allowed.";  
        }

        if (num1 < 0 || num2 < 0) {
            throw num1;  
        }

        float result = (float)num1 / num2;
        cout << "The result of division is: " << result << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }
    catch (int num) {
        cout << "Error: Negative number (" << num << ") entered." << endl;
    }
    catch (...) {
        cout << "An unknown error occurred." << endl;
    }

    return 0;
}
