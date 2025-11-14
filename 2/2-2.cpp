#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    char a;
    int a1;
    cout << "A = ";
    cin >> a;
    a1 = (int)a;

    if (a1 >= '0' && a1 <= '5')
    {
        cout << "do" << endl;
    }
    else if (a1 >= '6' && a1 <= '9')
    {
        cout << "posle" << endl;
    }

    system("PAUSE");
    return 0;
}
