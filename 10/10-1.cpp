//
// 8)	Дан массив b (n) . Переписать в массив C(n) отрицательные элементы массива b(n).
// (со сжатием., без пустых элементов внутри)
// Затем упорядочить методом «выбора» по убыванию  новый массив.

#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int b[n];

    for (int i = 0; i < n; i++) {
        b[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "X[" << i << "] = " << b[i] << endl;
    }
    cout << endl;

    int count = 0;
    int c[count];
    for (int i = 0; i < n; i++) {
        if (b[i] < 0) {
            count++;
            c[count - 1] = b[i];
        }
    }

    cout << "Получили массив: " << endl;
    for (int i = 0; i < count; i++) {
        cout << "C[" << i << "] = " << c[i] << endl;
    }
    int min, temp;
    for (int i = 0; i < count - 1; i++) {
        min = i;
        for (int j = i + 1; j < count; j++) {
            if (c[j] < c[min])
                min = j;
        }
        temp = c[i];
        c[i] = c[min];
        c[min] = temp;
    }
    cout << endl;
    cout << "Получили sort массив: " << endl;
    for (int i = 0; i < count; i++) {
        cout << "C[" << i << "] = " << c[i] << endl;
    }
}
