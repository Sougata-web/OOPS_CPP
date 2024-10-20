//  Write a C++ program illustrating the use of Abstract class & Pure virtual functions in class.

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;  

    virtual void displayShape() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }

    void displayShape() override {
        cout << "This is a circle." << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }

    void displayShape() override {
        cout << "This is a rectangle." << endl;
    }
};

int main() {

    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    Shape* shapePtr;

    shapePtr = &circle;
    shapePtr->displayShape();
    shapePtr->area();

    shapePtr = &rectangle;
    shapePtr->displayShape();
    shapePtr->area();

    return 0;
}
