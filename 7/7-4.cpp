// Дан одномерный целочисленный массив X[n], заданный случайными числами на промежутке [-10; 10].
// Вставить только положительные элементы из массива B[m] в конец массива X.


#include <windows.h>
#include <iostream>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int x[n];

    for (int i = 0; i < n; i++) {
        x[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: "<<endl;
    for (int i = 0; i < n; i++) {
        cout <<"X["<<i<<"] = "<<x[i] <<endl;
    }
    cout << endl;

    // Допишу, не понял.
}