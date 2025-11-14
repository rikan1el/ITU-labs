#include <iostream>
#include <cstdlib>
#include<Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    for (int k = 1; k <= 99; k++) {
        cout << "Мне " << k << " ";

        if (k % 100 >= 11 && k % 100 <= 14) {
            cout << "лет" << endl;
        } else {
            switch (k % 10) {
                case 1:
                    cout << "год" << endl;
                    break;
                case 2:
                case 3:
                case 4:
                    cout << "года" << endl;
                    break;
                default:
                    cout << "лет" << endl;
                    break;
            }
        }
    }
    system("PAUSE");
    return 0;
}
