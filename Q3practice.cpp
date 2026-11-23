/*Q3. Shape Area Calculator

Company: Accenture

OOP concepts: Runtime polymorphism, inheritance, virtual functions.

WAP: Create a base class Shape with a virtual function calculateArea(). Derive classes Circle, Rectangle, and Triangle. Override the function in each derived class to calculate its area.

Expected output: Correct areas calculated through base-class pointers.*/
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculateArea() = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(10, 20);
    Triangle triangle(10, 15);

    Shape* shapes[3] = { &circle, &rectangle, &triangle };

    cout<<"Area of Circle: " << shapes[0]->calculateArea() << endl;
    cout<<"Area of Rectangle: " << shapes[1]->calculateArea() << endl;
    cout<<"Area of Triangle: " << shapes[2]->calculateArea() << endl;
    return 0;
}