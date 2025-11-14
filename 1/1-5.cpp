#include <iostream>  // подключаем библиотеку для работы с вводом/выводом (cin, cout)
#include <cmath>     // подключаем библиотеку для работы с математических функций (cbrt, floor, ceil)
using namespace std; // использования стандартного пространства имён что бы не писать всё время std::cout, std::cin and std::endl

int main()
{
    double Y, X, Z;
    double A, B;
    cout << "Enter your A, please: " << endl; // запрашиваем A пользователя значение A
    cin >> A;                                 // читаем число от пользователя и записываем в A
    cout << "Enter your B, please: " << endl; // запрашиваем B пользователя значение B
    cin >> B;                                 // читаем число от пользователя и записываем в B
    X = pow(log(fabs(A - B)),2);
    Z = sqrt(A + A * pow(B, 3));
    Y = pow((5 * log(X) + pow((sin(B * Z)), 3)),1.0/5.0) / (exp(A * X) - pow(sin(fabs(Z)), 2)); // само вырожение
    cout << Y << endl; // выводим результат Y
}