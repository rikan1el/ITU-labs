// 8.	Дан двумерный массив a, размером (nm) и одномерный массив х(m). Нечетные строки матрицы заменить массивами х. (не использовать %, использовать for)

#include <iostream>
#include <windows.h>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int n, m;
    cout << "Введите кол-во строк массива: ";
    cin >> n;
    cout << "Введите кол-во столбецов массива; ";
    cin >> m;
    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 21 - 10;
        }
    }
    cout << "Сгенерированный массив a[n][m]: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    int x[n];
    for (int i = 0; i < n; i++) {
        x[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив x[m]: "<<endl;
    for (int i = 0; i < m; i++) {
        cout <<"X["<<i<<"] = "<<x[i] << "\t";
    }
    cout << endl;

    for (int i = 1; i < n; i+=2) {
            for (int j = 0; j < m; j++) {
                a[i][j] = x[j];
            }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

}