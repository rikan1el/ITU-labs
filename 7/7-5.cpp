// 8.	Дан одномерный массив. Вывести на экран только те элементы массива, индексы которых являются степенями двойки (1,2,4,8,16,…)


#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int x[n];

    for (int i = 0; i < n; i++) {
        x[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: "<<endl;
    for (int i = 0; i < n; i++) {
        cout <<"X["<<i<<"] = "<<x[i] <<endl;
    }
    cout << endl;

    for (int i = 1; i < n; i *=2) {
        cout <<"X["<<i<<"] = "<<x[i] <<endl;

    }
}
