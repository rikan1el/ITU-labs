#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double pi = 3.14159265358979323846;
    double sum = 0.0;
    for (int i = 1; i <= 20; i++) {
        double s1 = pow(i, 2) + sin(pi * i / 16.0);
        double s2 = 0.0;
        for (int j = i; j <= 21; j++) {
            s2 += pow(j, 2);
        }
        sum += s1 / s2;
    }
    double S = 86 * sqrt(sum);
    cout << "S = " << S << endl;
    return 0;
}
