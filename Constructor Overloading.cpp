// Ayush Yadav
// 24070123028

#include <iostream>
using namespace std;

class Shape {
    float area;
    string type;

public:
    Shape() {
        area = 0;
        type = "Undefined";
    }

    Shape(int length, int breadth) {
        area = length * breadth;
        type = "Rectangle";
    }

    Shape(int side) {
        area = side * side;
        type = "Square";
    }

    void display() {
        cout << "Shape: " << type << ", Area: " << area << endl;
    }
};

int main() {
    Shape s1;
    Shape s2(10, 5);
    Shape s3(7);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}

// OUTPUT
// Shape: Undefined, Area: 0
// Shape: Rectangle, Area: 50
// Shape: Square, Area: 49
