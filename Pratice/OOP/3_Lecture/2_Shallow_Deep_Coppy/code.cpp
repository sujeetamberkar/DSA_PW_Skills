#include<iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    // Parameterized constructor
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    // Copy constructor
    Box(const Box &obj) {
        length = obj.length;
        width = obj.width;
        height = obj.height;
    }

    // Function to display dimensions of the box
    void display() {
        cout << "Dimensions: " << length << "x" << width << "x" << height << endl;
    }
};

int main() {
    Box box1(10, 20, 30);  // Create a box with dimensions 10x20x30
    Box box2 = box1;       // Use copy constructor to create box2 as a copy of box1

    cout << "Box1: ";
    box1.display();

    cout << "Box2: ";
    box2.display();

    return 0;
}
