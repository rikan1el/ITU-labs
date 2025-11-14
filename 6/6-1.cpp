#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    float A[n];

    for (int i = 0; i < n; i++) {
        A[i] = rand() % 21 - 10;
    }

    cout << "Сгенерированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    double sum = 1;
    for (int i = 0; i < n; i++) {
        sum *= A[i];
    }

    double geoMean = pow(sum, 1.0/n);

    cout << "Среднее геометрическое элементов массива: " << geoMean << endl;

    return 0;
}
