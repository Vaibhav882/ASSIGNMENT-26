#include <iostream>
using namespace std;

class Bill {
    string customerName;
    int units;
    float total;
public:
    void get() {
        cout << "Enter Customer Name: ";
        cin >> customerName;
        cout << "Enter Units Consumed: ";
        cin >> units;
    }
    void calculateBill() {
        if (units <= 100)
            total = units * 1.20;
        else if (units <= 200)
            total = 100 * 1.20 + (units - 100) * 2;
        else
            total = 100 * 1.20 + 100 * 2 + (units - 200) * 3;
    }
    void display() {
        cout << "Customer: " << customerName << endl;
        cout << "Units: " << units << endl;
        cout << "Total Bill: Rs. " << total << endl;
    }
};

int main() {
    Bill b;
    b.get();
    b.calculateBill();
    b.display();
    return 0;
}
