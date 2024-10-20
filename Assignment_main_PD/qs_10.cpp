//  Write a C++ Program to implement Method Overloading

#include <iostream>
using namespace std;

class Calculator {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    
    int add(int a, int b, int c) {
        return a + b + c;
    }

    
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    
    cout << "Sum of two integers (5, 10): " << calc.add(5, 10) << endl;
    cout << "Sum of three integers (5, 10, 15): " << calc.add(5, 10, 15) << endl;
    cout << "Sum of two floating-point numbers (5.5, 10.5): " << calc.add(5.5, 10.5) << endl;

    return 0;
}
