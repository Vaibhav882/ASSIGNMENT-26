#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter() {
        count = 0;
        count++;
        cout << "Counter = " << count << endl;
    }
};

int main() {
    Counter c1, c2, c3;
    return 0;
}
