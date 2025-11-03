#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;
public:
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(101, "Vaibhav", 88.5);
    s1.display();
    return 0;
}
