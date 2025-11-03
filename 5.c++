#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    Date(int d, int m, int y) {
        day = d; month = m; year = y;
    }
    void showDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d1(4, 11, 2025);
    d1.showDate();
    return 0;
}
