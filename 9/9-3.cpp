// 8.	Дан двумерный массив А, размером (nn) (или квадратная матрица А).
// Найти среднее геометрическое отрицательных элементов, нижней треугольной матрицы,
// расположенной ниже побочной диагонали, исключая саму побочную диагональ.

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
    int sum = 0.0,count = 0.0;
    float geo;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > n - i - 1) {
                if (a[i][j] < 0) {
                    cout << a[i][j] << "\t";
                    sum += a[i][j];
                    count++;
                }
            }
        }
    }
    cout<<endl;
    geo = pow(sum, 1.0/count);
    cout<< geo;

}