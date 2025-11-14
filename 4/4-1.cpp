// Вычислить  сумму квадратов целых чисел кратных 3 в интервале от 20 до 120. Решить 3-мя способами: оператор цикла  for ;
// оператор цикла do..while;  оператор цикла   while. Выполнить письменно пошаговую компиляцию (трассировку) программы,
// путем составления таблицы для первых четырех итераций алгоритма решения задачи.


#include <iostream>
#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iomanip>

using namespace std;

void WithFor() {
    int sum = 0;
    for (int i = 20; i <= 120; i++) {
        if (i % 3 == 0) {
            sum += i * i;
        }
    }
    cout << "Сумма квадратов (for): " << sum << endl;
}

void WithWhile() {
    int sum = 0, i = 20;
    while (i++ <= 120) {
        if (i % 3 == 0) {
            sum += i * i;
        }
    }
    cout << "Сумма квадратов (while): " << sum << endl;
}

void WithWhileDO() {
    int sum = 0, i = 20;
    do {
        if (i % 3 == 0) {
            sum += i * i;
        }
    } while (i++ <= 120);
    cout << "Сумма квадратов (do...while): " << sum << endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    WithFor();
    WithWhile();
    WithWhileDO();

    system("pause");
    return 0;
}
