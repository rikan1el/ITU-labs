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

    float A[n];

    for (int i = 0; i < n; i++) {
        A[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    int i = 0;
    int positive = 0;
    for (i = 0; i < n; i++) {
        if (A[i] > 0) {
            positive++;
        }
    }
    
    float sum = 0;
    for (int j = 1; j < n; j += 2) {
        sum += A[j];
    }

    cout << "Количество положительных элементов: " << positive << endl;
    cout << "Сумма элементов на нечётных местах: " << sum << endl;

    return 0;
}
