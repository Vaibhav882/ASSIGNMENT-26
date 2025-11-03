#include <iostream>
using namespace std;

class Box {
    int length, breadth, height;
public:
    Box(int l, int b, int h) {
        length = l; breadth = b; height = h;
    }
    int volume() {
        return length * breadth * height;
    }
};

int main() {
    Box b1(5, 4, 3);
    cout << "Volume of Box = " << b1.volume();
    return 0;
}
