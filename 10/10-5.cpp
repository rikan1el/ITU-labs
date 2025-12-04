#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int x[n];

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        x[i] = rand() % 21 - 10;
        cout << x[i] << " ";
    }
    cout << endl;

    for (int h = n / 2; h > 0; h /= 2) {
        for (int i = h; i < n; i++) {
            int temp = x[i];
            int j = i;

            while (j >= h && x[j - h] > temp) {
                x[j] = x[j - h];
                j -= h;
            }

            x[j] = temp;
        }
    }

    cout << "Отсортированный массив (Шелл): ";
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
    cout << endl;

    return 0;
}
