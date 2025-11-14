#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, d;
    double max, min;

    cout << "Pishi a: ";
    cin >> a;

    cout << "Pishi b: ";
    cin >> b;
    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    d = (max - 2 * sqrt(min) + 4.2 * min) / (1 + max / min);

    cout << "Result: " << d << endl;

    return 0;
}
