// Ayush Yadav
// 24070123028

#include <iostream>
using namespace std;

class Book {
    string title;
    int pages;

public:
    Book(string t = "", int p = 0) : title(t), pages(p) {}

    Book operator-(const Book& b) {
        return Book(title + " & " + b.title, pages + b.pages);
    }

    void display() const {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b1("C++ Basics", 120);
    Book b2("Advanced C++", 200);

    Book b3 = b1 - b2;

    b1.display();
    b2.display();
    b3.display();

    return 0;
}

// OUTPUT
// Title: C++ Basics, Pages: 120
// Title: Advanced C++, Pages: 200
// Title: C++ Basics & Advanced C++, Pages: 320
