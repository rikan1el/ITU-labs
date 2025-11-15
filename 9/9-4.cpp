// 8.	Дано два двумерных массива х(n1m1) ,y(n2m2). Cформировать массив z((n1+ n2)(m1+m2)), таким образом, чтобы массивы x и y располагались по диагонали,
// а остальные элементы были бы заполнены нулями.  Например:


#include <iostream>
#include <windows.h>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int n1, m1;
    cout << "Введите кол-во строк массива x: ";
    cin >> n1;
    cout << "Введите кол-во столбецов массива x; ";
    cin >> m1;
    int x[n1][m1];

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            x[i][j] = rand() % 21 - 10;
        }
    }

    cout << "Сгенерированный массив x[n1][m1]: " << endl;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            cout << x[i][j] << "\t";
        }
        cout << endl;
    }

    int n2, m2;
    cout << "Введите кол-во строк массива y: ";
    cin >> n2;
    cout << "Введите кол-во столбецов массива y; ";
    cin >> m2;
    int y[n2][m2];

    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            y[i][j] = rand() % 21 - 10;
        }
    }

    cout << "Сгенерированный массив y[n1][m1]: " << endl;
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            cout << y[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    int z[n1+n2][m1+m2];

    for (int i = 0; i < n1+n2; i++) {
        for (int j = 0; j < m1+m2; j++) {
            z[i][j] = 0;
        }
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            z[i][j] = x[i][j];
        }
    }

    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            z[i+n1][j+m1] = y[i][j];
        }
    }

    for (int i = 0; i < n1+n2; i++) {
        for (int j = 0; j < m1+m2; j++) {
            cout << z[i][j] << "\t";
        }
        cout << endl;
    }
}