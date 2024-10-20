//  Write a C++ Program which creates & uses array of object of a class (for eg. implementing 
// the list of Managers of a Company having details such as Name, Age, etc...).

#include <iostream>
#include <string>
using namespace std;

class Manager {
private:
    string name;
    int age;
    string department;

public:
   
    void setDetails() {
        cout << "Enter Manager's Name: ";
        getline(cin, name);
        cout << "Enter Manager's Age: ";
        cin >> age;
        cin.ignore();  
        cout << "Enter Manager's Department: ";
        getline(cin, department);
    }

    
    void displayDetails() const {
        cout << "Manager's Name: " << name << endl;
        cout << "Manager's Age: " << age << endl;
        cout << "Manager's Department: " << department << endl;
    }
};

int main() {
    int numManagers;

    
    cout << "Enter the number of managers: ";
    cin >> numManagers;
    cin.ignore();  

    
    Manager managers[numManagers];

    
    for (int i = 0; i < numManagers; i++) {
        cout << "\nEnter details for Manager " << i + 1 << ":" << endl;
        managers[i].setDetails();
    }

   
    cout << "\nList of Managers:" << endl;
    for (int i = 0; i < numManagers; i++) {
        cout << "\nManager " << i + 1 << " Details:" << endl;
        managers[i].displayDetails();
    }

    return 0;
}
