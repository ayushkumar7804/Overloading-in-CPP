// Ayush Yadav
// 24070123028

#include <iostream>
using namespace std;

class Add {
    int result;

public:
    Add() {
        result = 0;
    }

    Add(int a, int b) {
        result = a + b;
    }

    Add(int a, int b, int c) {
        result = a + b + c;
    }

    void display() {
        cout << "Sum: " << result << endl;
    }
};

int main() {
    Add obj1;
    Add obj2(10, 20);
    Add obj3(5, 15, 25);
    Add obj4(12.5, 7.5);

    obj1.display();
    obj2.display();
    obj3.display();
    obj4.display();

    return 0;
}

// OUTPUT
// Sum: 0
// Sum: 30
// Sum: 45
// Sum: 19
