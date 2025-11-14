// Дан одномерный целочисленный массив X[10], заданный случайными числами на промежутке [-10; 10]. Удалить все положительные элементы  в массиве.

#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int n = 10;

    int x[n];

    for (int i = 0; i < n; i++) {
        x[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: "<<endl;
    for (int i = 0; i < n; i++) {
        cout <<"X["<<i<<"] = "<<x[i] <<endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (x[i] < 0) {
            int count = 0;
            count++;
            int b[count];
            b[count] = x[i];
            cout <<b[count] <<endl;
        }

    }
}