// 8.	Даны    два    массива    А    и    В.    Вычислить    массив     С,    элементы    которого    находятся    по    правилу: c[i]= min(a[i], b[i])

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
    int x[n], y[n],c[n];

    for (int i = 0; i < n; i++) {
        x[i] = rand() % 21 - 10;
        y[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: "<<endl;
    for (int i = 0; i < n; i++) {
        cout <<"X["<<i<<"] = "<<x[i] << "\t" <<"Y["<<i<<"] = "<<y[i] << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        if (x[i] > y[i]) {
            c[i] = y[i];
        }
        else {
            c[i] = x[i];
        }
        cout <<"C["<<i<<"] = "<< c[i] <<endl;
    }
}