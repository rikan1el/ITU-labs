//  8.	Дан двумерный массив a, размером (nm).
//  Найти номер минимального элемента в каждой строке матрицы.
//  Затем каждый элемент каждой строки умножить на номер
//  минимального элемента строки.

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
    int x[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            x[i][j] = rand() % 21 - 10;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { cout << x[i][j] << "\t"; }
        cout << endl;
    }
    cout << endl;
    int temp = 0;
    int z[m];

    for (int i = 0; i < n; i++) {
        int min = x[i][0];
        for (int j = 0; j < m; j++) {
            if (x[i][j] < min) {
                min = x[i][j];
                temp = j;
            }
        }
        for (int j = 0; j < m; j++) {
            x[i][j] *= temp;
        }
        cout << temp << "\t";
        temp = 0;
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { cout << x[i][j] << "\t"; }
        cout << endl;
    }
}
