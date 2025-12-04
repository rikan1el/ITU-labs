#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int x[n];
    double y[n];
    double a, b;

    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    cout << "Массив x: ";
    for (int i = 0; i < n; i++) {
        x[i] = rand() % 21 - 10;
        cout << x[i] << " ";
    }
    cout << endl;

    cout << "Массив y: ";
    for (int i = 0; i < n; i++) {
        if (x[i] > 0)
            y[i] = a * log(x[i]) - b * pow(x[i], 2);
        else
            y[i] = -1e9;
        cout << y[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < n; i++) {
        double key = y[i];
        int j = i - 1;
        while (j >= 0 && y[j] < key) {
            y[j + 1] = y[j];
            j--;
        }
        y[j + 1] = key;
    }

    cout << "Отсортировано по убыванию: ";
    for (int i = 0; i < n; i++)
        cout << y[i] << " ";
    cout << endl;

    int newSize = 1;
    for (int i = 1; i < n; i++) {
        if (fabs(y[i] - y[newSize - 1]) > 1e-6)
            y[newSize++] = y[i];
    }

    cout << "Без дубликатов: ";
    for (int i = 0; i < newSize; i++)
        cout << y[i] << " ";
    cout << endl;

    return 0;
}
