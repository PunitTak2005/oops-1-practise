#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    void displayArea() {
        cout << "Area: " << length * width << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 10);
    rect.displayArea();
    return 0;
}
