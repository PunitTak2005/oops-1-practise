#include <iostream>
using namespace std;

struct Book {
    string title;
    string author;
    double price;
};

int main() {
    Book b1 = {"C++ Programming", "Bjarne Stroustrup", 59.99};
    cout << "Title: " << b1.title << ", Author: " << b1.author << ", Price: $" << b1.price << endl;
    return 0;
}
