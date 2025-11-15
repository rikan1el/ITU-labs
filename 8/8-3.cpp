// 8.	Дан двумерный массив a, размером (nm). Заполнить одномерный массив, найдя количество отрицательных элементов в каждом столбце матрицы

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
    int y[m];
    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (x[j][i] < 0) {
                count++;
            }
        }
        y[i] = count;
        count = 0;
        cout << y[i] << " ";
    }
}
