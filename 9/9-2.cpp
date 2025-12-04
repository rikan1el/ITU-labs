// 8.	Дан двумерный массив A, размером (nn) (или квадратная матрица A).
// Найти среднее арифметическое положительных элементов параллели главной диагонали, расположенной выше над диагональю.


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
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 21 - 10;
        }
    }
    cout << "Сгенерированный массив a[n][n]: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    float count = 0.0;
    float sum = 0.0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i][i+1] > 0) {
            cout << a[i][i+1] << "\t";
            sum += a[i][i+1];
            count++;
        }
    }
    float x = 0.0;
    x = sum / count;
    cout << endl;
    cout <<"Cреднее арифметическое положительных элементов параллели главной диагонали = " <<x << endl;

}