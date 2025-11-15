// 8.	Дан двумерный массив A(n ×m)  . Элементы матрицы сгенерировать случайными числами. Найти произведение  и количество положительных элементов в 5-ой строке матрицы.

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
    cout << endl;
    int sum = 1,count = 0;
    for (int j = 0; j < m; j++) {
        if (x[5][j] >= 0) {
            cout<<x[5][j]<<" ";
            sum *= x[5][j];
            count++;
        }
    }
    cout<< "\t" << sum << "\t" << count;

}