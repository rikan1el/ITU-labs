#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int index = 0, count = 0;
    double num, sum = 0;

    cout << "Введите последовательность ненулевых чисел (0 - конец): " << endl;

    do {
        cin >> num;
        index++;

        if (num > 0) {
            cout << "Положительный элемент #" << index << ": " << num << endl;
            sum += num;
            count++;
        }
    } while (num != 0);

    if (count > 0) {
        double avg = sum / count;
        cout << "Среднее арифметическое положительных элементов = " << avg << endl;
    } else {
        cout << "Положительных элементов нет." << endl;
    }

    return 0;
}
