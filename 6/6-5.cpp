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

    float c[n];


    for (int i = 0; i < n; i++) {
        c[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    int k = 0;

    for (int i = 0; i < n; i++) {
        if (c[i] < 0) {
            c[k] = c[i];
            k++;
        }
    }

    cout << "Отрицательные элементы массива: ";
    for (int i = 0; i < k; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
