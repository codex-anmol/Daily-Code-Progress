#include <iostream>
using namespace std;

class LibraryMember;

class Book
{
private:
    int bookId;
    string bookName;
    bool available;

public:

    // Constructor
    Book(int id, string name)
    {
        bookId = id;
        bookName = name;
        available = true;
    }

    // Friend function
    friend void displayDetails(Book b, LibraryMember m);

    void issueBook()
    {
        if(available)
        {
            available = false;
            cout << "\nBook issued successfully!";
        }
        else
        {
            cout << "\nBook is not available!";
        }
    }

    void returnBook()
    {
        if(!available)
        {
            available = true;
            cout << "\nBook returned successfully!";
        }
        else
        {
            cout << "\nBook was not issued!";
        }
    }
};

class LibraryMember
{
private:
    int memberId;
    string memberName;

public:

    // Constructor
    LibraryMember(int id, string name)
    {
        memberId = id;
        memberName = name;
    }

    friend void displayDetails(Book b, LibraryMember m);
};

// Friend function definition
void displayDetails(Book b, LibraryMember m)
{
    cout << "\n\n----- Library Details -----";
    cout << "\nBook ID: " << b.bookId;
    cout << "\nBook Name: " << b.bookName;
    cout << "\nMember ID: " << m.memberId;
    cout << "\nMember Name: " << m.memberName;

    if(b.available)
        cout << "\nAvailability: Available";
    else
        cout << "\nAvailability: Issued";
}

int main()
{
    Book b1(101, "C++ Programming");
    LibraryMember m1(1, "Anmol");

    displayDetails(b1, m1);

    b1.issueBook();

    displayDetails(b1, m1);

    b1.returnBook();

    displayDetails(b1, m1);

    return 0;
}