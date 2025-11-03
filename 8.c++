#include <iostream>
using namespace std;

class Bank {
    float principal, rate, time;
public:
    Bank(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }
    float simpleInterest() {
        return (principal * rate * time) / 100;
    }
    void display() {
        cout << "Simple Interest = " << simpleInterest() << endl;
    }
};

int main() {
    Bank b1(10000, 5, 2);
    b1.display();
    return 0;
}
