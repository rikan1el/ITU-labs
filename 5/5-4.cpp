#include <iostream>
#include <cmath> // для log10 и fabs
using namespace std;

int main() {
    double x, minValue;
    int index = 0, minIndex = 0;

    cout << "Введите последовательность ненулевых чисел (0 - конец): " << endl;

    do {
        cin >> x;

        if (x == 0) break; // конец последовательности

        index++;

        double lgx = log10(x);      // десятичный логарифм
        double absLgx = fabs(lgx);  // модуль логарифма

        if (absLgx < minValue) {
            minValue = absLgx;
            minIndex = index;
        }

    } while (x != 0);

    if (index > 0) {
        cout << "Минимум по модулю lg(x) = " << minValue << ", его порядковый номер = " << minIndex << endl;
    } else {
        cout << "Последовательность пустая." << endl;
    }

    return 0;
}
