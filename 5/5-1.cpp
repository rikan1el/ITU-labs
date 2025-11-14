#include <iostream>

using namespace std;

int main() {
    char x;
    int cout, sim;
    cout << "Введите 2 символа: " << endl;
    do {
        cin >> x;
        sim += 0;
        if (x >= '1' && x <= '0') {
            cout++;
        }
        cout <<" Вы вели 2 символа из них -"<< cout <<"цифр";
    } while (sim <= 2);
    return 0;
}
