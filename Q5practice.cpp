/*Q5. Library Management System

Company: Wipro

OOP concepts: Friend functions, classes, constructors, object relationships.

WAP: Create classes Book and LibraryMember. Implement book issuing, returning,
 and availability tracking. Use a friend function to access and display selected
  private details of a book and its borrowing status.

Expected output: Book information, availability, and issue/return status.


*/
#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title;
    string author;
    int bookID;
    bool isAvailable;
};
class LibraryMember {
public:
   string memberName;
    int memberID;
    void issueBook(Book& book) {
        if (book.isAvailable) {
            book.isAvailable = false;
            std::cout << "Book issued successfully to " << memberName << std::endl;
        } else {
            std::cout << "Book is not available for issuing." << std::endl;
        }
    }
    void returnBook(Book& book) {
        book.isAvailable = true;
        cout << "Book returned successfully by " << memberName << std::endl;
    }
};
int main() {
    Book book1;
    book1.title = "The Great Gatsby";
    book1.author = "F. Scott Fitzgerald";
    book1.bookID = 101;
    book1.isAvailable = true;

    LibraryMember member1;
    member1.memberName = "Alice";
    member1.memberID = 201;

    cout << "Book Title: " << book1.title << std::endl;
    cout << "Author: " << book1.author << std::endl;
    cout << "Book ID: " << book1.bookID << std::endl;
    cout << "Availability: " << (book1.isAvailable ? "Available" : "Not Available") << std::endl;

    member1.issueBook(book1);
    cout << "Availability after issuing: " << (book1.isAvailable ? "Available" : "Not Available") << std::endl;

    member1.returnBook(book1);
    cout << "Availability after returning: " << (book1.isAvailable ? "Available" : "Not Available") << std::endl;

    return 0;
}