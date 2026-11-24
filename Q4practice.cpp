/*Student Result Processing System

Company: Microsoft

OOP concepts: Classes, encapsulation, constructors, static members.

WAP: Create a class Student containing roll number, name, and marks in five subjects. Calculate total marks, percentage, and grade. Use a static data member to count the total number of student objects created.

Expected output: Student result, grade, and total student count.*/
#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks[5];
    float total, percentage;
    static int count;

public:

    // Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        total = 0;
        percentage = 0;
        count++;
    }

    // Function to input marks
    void inputMarks()
    {
        cout << "Enter marks in 5 subjects: "<< endl;

        for(int i = 0; i < 5; i++)
        {
            cin >> marks[i];
            total += marks[i];
        }

        percentage = total / 5;
    }

    // Function to display result
    void displayResult()
    {
        cout << "\n----- Student Result -----";
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";

        if(percentage >= 90)
            cout << "\nGrade: A+";
        else if(percentage >= 80)
            cout << "\nGrade: A";
        else if(percentage >= 70)
            cout << "\nGrade: B";
        else if(percentage >= 60)
            cout << "\nGrade: C";
        else if(percentage >= 40)
            cout << "\nGrade: D";
        else
            cout << "\nGrade: Fail";
    }

    // Static function
    static void showCount()
    {
        cout << "\nTotal Students: " << count;
    }
};

// Initialize static data member
int Student::count = 0;

int main()
{
    Student s1(101, "Anmol");
    s1.inputMarks();
    s1.displayResult();

    Student s2(102, "Rahul");
    s2.inputMarks();
    s2.displayResult();

    Student::showCount();

    return 0;
}