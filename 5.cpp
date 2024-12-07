#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    void setRadius(double r);
    double calculateArea();
};

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::calculateArea() {
    return 3.14159 * radius * radius;
}

int main() {
    Circle c;
    c.setRadius(5.0);
    cout << "Area: " << c.calculateArea
