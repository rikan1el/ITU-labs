// 8.	Дан массив с (n) . Переписать в массив х(n) все ненулевые элементы массива умноженные на 4.
// Затем упорядочить методом «шейкер-пузырька» по возрастанию  новый массив. Выдать на экран номера одинаковых элементов в упорядоченном массиве.
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int c[n];

    for (int i = 0; i < n; i++) {
        c[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив c[n]: " << endl;
    for (int i = 0; i < n; i++) {
            cout << c[i] << "\t";
    }
    cout << endl;

    int count = 0, x[count];

    for (int i = 0; i < n; i++) {
        if (c[i] > 0) {
            count++;
            x[count-1] = c[i];
        }
    }

    cout << "Массив x[count] (c[i] > 0): " << endl;
    for (int i = 0; i < count; i++) {
        cout << x[i] << "\t";
    }
    cout << endl;
    bool exchenge;
    int temp;
    do {
        exchenge = false;
        for (int i = count-1; i > 0; i--) {
            if (x[i] < x[i-1]) {
                temp = x[i-1];
                x[i-1] = x[i];
                x[i] = temp;
                exchenge = true;
            }
        }
    }while (exchenge);

    cout << "Sort x[count]: " << endl;
    for (int i = 0; i < count; i++) {
        cout << x[i] << "\t";
    }
}