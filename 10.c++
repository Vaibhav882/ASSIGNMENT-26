#include <iostream>
using namespace std;

class StaticCount {
    static int count;
public:
    void increment() {
        count++;
    }
    void display() {
        cout << "Count = " << count << endl;
    }
};

int StaticCount::count = 0;

int main() {
    StaticCount s;
    s.increment();
    s.display();
    s.increment();
    s.display();
    s.increment();
    s.display();
    return 0;
}
