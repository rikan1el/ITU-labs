// 8.	Дан двумерный массив A(n ×m). Ввести данные с клавиатуры. Вывести матрицу на экран в виде таблицы. Найти сумму положительных элементов матрицы.
#include <iostream>
#include <windows.h>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int n,m;
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

    cout << "Сгенерированный массив: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout <<"X["<<i<<"]"<<"["<<j<<"] = "<<x[i][j] <<endl;
        }
    }
    int a = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (x[i][j] > 0) {
                a += x[i][j];
            }
        }
    }
    cout << "Сумма положительных элементов матрицы = " <<a << " ";


    cout << endl;
}