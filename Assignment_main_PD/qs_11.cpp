// Write a C++ Program to design a student class representing student roll no. and a test class 
// (derived class of student) representing the scores of the student in various subjects and 
// sports class representing the score in sports. The sports and test class should be inherited 
// by a result class having the functionality to add the scores and display the final result for a 
// student.

#include <iostream>
using namespace std;

class Student {
protected:
    int roll_no;

public:
    void setRollNo(int r) {
        roll_no = r;
    }

    void displayRollNo() {
        cout << "Roll No: " << roll_no << endl;
    }
};

class Test : virtual public Student {
protected:
    float test_scores[3]; 

public:
    void setTestScores(float s1, float s2, float s3) {
        test_scores[0] = s1;
        test_scores[1] = s2;
        test_scores[2] = s3;
    }

    void displayTestScores() {
        cout << "Test Scores: " << test_scores[0] << ", " << test_scores[1] << ", " << test_scores[2] << endl;
    }

    float totalTestScore() {
        return test_scores[0] + test_scores[1] + test_scores[2];
    }
};

class Sports : virtual public Student {
protected:
    float sports_score;

public:
    void setSportsScore(float score) {
        sports_score = score;
    }

    void displaySportsScore() {
        cout << "Sports Score: " << sports_score << endl;
    }

    float getSportsScore() {
        return sports_score;
    }
};

class Result : public Test, public Sports {
public:
    void displayResult() {
        displayRollNo();
        displayTestScores();
        displaySportsScore();

        float total = totalTestScore() + getSportsScore();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result student;

    student.setRollNo(101);

    student.setTestScores(85.5, 78.0, 92.0);

    student.setSportsScore(88.5);

    student.displayResult();

    return 0;
}
