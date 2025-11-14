/// 8) Выполнить табуляцию функции, то есть: для заданной  переменной  x[0;3]
/// с шагом h = 0,2 . При всех значениях х
/// вычислить значения функции y = 2 x – 2,2x. Вывести в столбик х и соответствующий y.

#include <iostream>
#include <cstdlib>
#include<Windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    float y;
    cout << "x\t\ty" << endl;

    for (float x = 0.0; x <= 3.0; x += 0.2) {
        y = 2 * x - 2.2 * x;
        cout << x << "\t\t" << y << endl;
    }

    system("pause");
    return 0;
}