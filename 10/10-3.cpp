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
    int x[n];
    for (int i = 0; i < n; i++) {
        if (c[i] > 0) {
            x[n] = c[i]*4;
        }
    }

    for (int i = 0; i < n; i++) {
        cout <<"X["<<i<<"] = "<<c[i] <<endl;
    }

    // не готова
}
