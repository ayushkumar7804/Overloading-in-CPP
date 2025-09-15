// Ayush Yadav
// 24070123028

#include <iostream>
using namespace std;

class UserInfo {
public:
    void show(string name) {
        cout << "Name: " << name << endl;
    }

    void show(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void show(string name, string city) {
        cout << "Name: " << name << ", City: " << city << endl;
    }

    void show(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    UserInfo u;

    u.show("Ayush");
    u.show("Ayush", 20);
    u.show("Ayush", "Pune");
    u.show("Ayush", 20, "Pune");

    return 0;
}

// OUTPUT
// Name: Ayush
// Name: Ayush, Age: 20
// Name: Ayush, City: Pune
// Name: Ayush, Age: 20, City: Pune
