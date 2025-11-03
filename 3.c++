#include <iostream>
using namespace std;

class Cube {
    int side;
public:
    Cube(int s) {
        side = s;
    }
    int volume() {
        return side * side * side;
    }
};

int main() {
    Cube c(5);
    cout << "Volume of Cube = " << c.volume();
    return 0;
}
