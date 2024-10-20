// Write a C++ program illustrating the use of virtual functions in class.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "This is the sound of an animal." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "The dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "The cat meows." << endl;
    }
};

class Cow : public Animal {
public:
    void sound() override {
        cout << "The cow moos." << endl;
    }
};

int main() {
    Animal *animalPtr; 

    Dog dog;
    Cat cat;
    Cow cow;

    animalPtr = &dog;
    animalPtr->sound(); 

    animalPtr = &cat;
    animalPtr->sound();  

    animalPtr = &cow;
    animalPtr->sound();  

    return 0;
}
