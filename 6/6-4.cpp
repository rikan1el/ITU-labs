#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    float x[n];

    for (int i = 0; i < n; i++) {
        x[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    double min = x[0];
    for (int i = 1; i < n; i++) {
        if (x[i] < min) {
            min = x[i];
        }
    }

    cout << "Минимальный элемент: " << min << endl;

    for (int i = 0; i < n; i++) {
        x[i] = x[i] / min;
    }

    cout << "Массив после деления на минимальный элемент: ";
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}
