#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int num, sum = 0, betta;
    cout << "Введите число betta: ";
    cin >> betta;
    cout << "Введите последовательность чисел (0 - конец): " << endl;
    do {
        cin >> num;
        if (num > betta) {
            sum += num;
        }
    } while (num != betta);
    cout << "Сумма чисел, больших " << betta << " = " << sum << endl;
    return 0;
}
