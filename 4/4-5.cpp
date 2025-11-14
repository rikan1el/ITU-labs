#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Введите x: ";
    cin >> x;

    y = sin(99 * x); // начинаем с самого внутреннего sin

    for (int i = 98; i >= 1; i--) {
        y = sin(i * x + y);
    }

    cout << "y = " << y << endl;
    return 0;
}
