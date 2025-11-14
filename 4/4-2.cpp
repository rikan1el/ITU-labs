#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    int i = 6;
    double y;
    do {
        y += 1 / i;
    } while (i++ <= 42);
    cout << y << endl;
}
