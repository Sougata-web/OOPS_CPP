//  Write a C++ Program to Print Maximum Occurring Character in a String.

#include <iostream>
#include <string>
using namespace std;

#define ASCII_SIZE 256

char getMaxOccurringChar(string str)
{

    int count[ASCII_SIZE] = {0};

    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }

    int max = -1;
    char result;

    for (int i = 0; i < str.length(); i++)
    {
        if (max < count[str[i]])
        {
            max = count[str[i]];
            result = str[i];
        }
    }

    return result;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    char maxChar = getMaxOccurringChar(str);

    cout << "The maximum occurring character is: " << maxChar << endl;

    return 0;
}
