// 8.	Дан двумерный массив a, размером (nm). Переставить последний и случайно выбранный столбец. (random)

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
    int random, temp;
    random = rand() % m;
    cout << random << endl;
    for (int i = 0; i < n; i++) {
        temp = x[i][m - 1];
        x[i][m - 1] = x[i][random];
        x[i][random] = temp;
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { cout << x[i][j] << "\t"; }
        cout << endl;
    }
}
