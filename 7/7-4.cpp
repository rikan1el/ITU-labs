// Дан одномерный целочисленный массив X[n], заданный случайными числами на промежутке [-10; 10].
// Вставить только положительные элементы из массива B[m] в конец массива X.


#include <iostream>
#include <windows.h>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int n, m;
    cout << "Введите размер массива: ";
    cin >> n;
    cout << "Введите размер массива: ";
    cin >> m;
    int x[n], b[m];

    for (int i = 0; i < n; i++) {
        x[i] = rand() % 21 - 10;
    }
    for (int i = 0; i < m; i++) {
        b[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив x[n]: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "X[" << i << "] = " << x[i] << endl;
    }
    cout << endl;

    cout << "Сгенерированный массив b[m]: " << endl;
    for (int i = 0; i < m; i++) {
        cout << "b[" << i << "] = " << b[i] << endl;
    }
    cout << endl;

    int newSize = n;
    for (int i = 0; i < m; i++) {
        if (b[i] > 0) {
            x[newSize] = b[i];
            newSize++;
        }
    }

    cout << "Результирующий массив X: ";
    for (int i = 0; i < newSize; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    return 0;
}
