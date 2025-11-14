#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    double x, Y, F;

    cout << "Введите x: ";
    cin >> x;

    if (x <= -3)
    {
        Y = pow(x, 3) + 1;
    }
    else if (x > -3 && x <= 4)
    {
        Y = 3 * x * (1 + exp(x + 1));
    }
    else
    {
        Y = tan(x);
    }

    if (x <= -3)
    {
        F = exp(sin(x));
    }
    else if (-3 < x && x <= 4)
    {
        F = pow(x, 4);
    }
    else
    {
        pow(tan(x), 1.0 / 5.0);
    }

    cout << "Y = " << Y << endl;
    cout << "F = " << F << endl;

    return 0;
}