#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    float b[n];


    for (int i = 0; i < n; i++) {
        b[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    int negIndex = -1;

    for (int i = 0; i < n; i++) {
        if (b[i] < 0) {
            negIndex = i;
            break;
        }
    }

    if (negIndex == -1) {
        cout << "Отрицательный элемент не найден!" << endl;
    } else {
        cout << "Отрицательный элемент находится под индексом: " << negIndex << endl;

        float product = 1; // меняем на float
        for (int i = 0; i < negIndex; i++) {
            product *= b[i];
        }

        cout << "Произведение элементов перед отрицательным: " << product << endl;
    }

    return 0;
}
