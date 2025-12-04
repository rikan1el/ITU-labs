// Дан одномерный целочисленный массив А[n], заданный случайными числами на промежутке [-10; 10].
// Переписать во второй массив B только нечетные элементы массива А. Выполните циклический сдвиг элементов с
// последней позиции нового массива влево на одну позицию. Переписать обратно (заменить) в исходный массив все нечетные элементы со смещением.
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    int n, k = 0, p = 0;
    cout << "Size: ";
    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 21 - 10;
    }

    cout << "Rand: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            b[k++] = a[i];
        }
    }

    cout << "Massiv B: ";
    for (int i = 0; i < k; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    if (k > 1) {
        int first = b[0];
        for (int i = 0; i < k - 1; i++) {
            b[i] = b[i + 1];
        }
        b[k - 1] = first;
    }

    cout << "Posle sdviga B: ";
    for (int i = 0; i < k; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            a[i] = b[p++];
        }
    }

    cout << "Otvet A: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
