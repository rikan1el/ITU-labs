#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    double fact = 1.0;
    double sum = 0.0;

    for (int i = 1; i <= 10; i++) {
        fact *= i;
        double n = (i + 1.0) / fact;
        sum += n;
        cout << "i = " << i << "\t term = " << n << "\t sum = " << sum << endl;
    }

    cout << "Итоговая сумма = " << sum << endl;
    return 0;
}
