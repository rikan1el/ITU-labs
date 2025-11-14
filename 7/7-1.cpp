#include <iostream>
#include <windows.h>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    float x, h = 0.2, y;
    int n = 0;
    for (x = 0.1; x <= 4.0; x += h) {
        float A[n];
        y = 5.0 * x - 8.0 * log(x);
        n++;
        A[n] = y;
        cout <<"A["<<n<<"] = "<< A[n] << "\t"<< "y = " << y << endl;
    }
    return 0;
}
