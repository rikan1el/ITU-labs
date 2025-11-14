#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double eps = 0.001;
    double sum = 0.0;
    double k;
    int n = 1;

    do {
        k = 1.0 / (n * (2.0 * n - 1.0));
        sum += k;
        n++;
        if (n < 6) {
            cout << n << "\t" << k << endl;
        }
    } while (k >= eps);

    cout << "Сумма ряда ≈ " << sum << endl;
    cout << "Количество членов: " << n - 1 << endl;

    return 0;
}
