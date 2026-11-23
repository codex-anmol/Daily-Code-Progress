/*Student Result Processing System

Company: Microsoft

OOP concepts: Classes, encapsulation, constructors, static members.

WAP: Create a class Student containing roll number, name, and marks in five subjects. Calculate total marks, percentage, and grade. Use a static data member to count the total number of student objects created.

Expected output: Student result, grade, and total student count.*/
#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    int rollNumber;
    string name;
    int marks[5];
    int totalMarks;
    float percentage;
    char grade;
    static int studentCount; // Static data member to count student objects
    void calculateResult() {
        totalMarks = 0;
        for (int i = 0; i < 5; ++i) {
            totalMarks += marks[i];
        }
        percentage = static_cast<float>(totalMarks) / 5.0f;

        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 80) {
            grade = 'B';
        } else if (percentage >= 70) {
            grade = 'C';
        } else if (percentage >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }
    void displayResult() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }


};
int main() {
    int rollNumber;
    string name;
    int marks[5];

    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    cin.ignore(); // Ignore the newline character after reading roll number

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Marks in 5 subjects: ";
    for (int i = 0; i < 5; ++i) {
        cin >> marks[i];
    }

    Student s1(rollNumber, name, marks);
    s1.calculateResult();
    s1.displayResult();

    cout << "Total Students Created: " << Student::getStudentCount() << endl;

    return 0;
}