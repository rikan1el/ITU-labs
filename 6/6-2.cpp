#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    float a[n];

    for (int i = 0; i < n; i++) {
        a[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    int positive = 0, negative = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;
    }

    cout << "Положительных чисел: " << positive << endl;
    cout << "Отрицательных чисел: " << negative << endl;

    if (positive > negative)
        cout << "Положительных чисел больше." << endl;
    else if (negative > positive)
        cout << "Отрицательных чисел больше." << endl;
    else
        cout << "Положительных и отрицательных чисел поровну." << endl;

    return 0;
}
