#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int z;
    double a,b,y;
    cout<<"Enter z: ";
    cin>>z;
    for (int r = -3; r <= 2; r++) {
        for (int x = 1; x <= 5; x++) {
            a *= 0.5*pow(r,x+2);
        }
        b += pow(z,r) + a;
    }
    y = z/5 + 8.2 * b;
    cout << y << endl;
}
