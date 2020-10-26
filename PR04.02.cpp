#include <iostream>
#include <math.h>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y;
    double a, b, c;
    const double pi = 3.14;
    cout << "Введіть х" << endl;
    cin >> x;
    cout << "Введіть у" << endl;
    cin >> y;
    a = (1 - sqrt(2 * x) + pow(x, 4) + exp(4 * y)) / (1 - pow(sqrt(8 * pow(y, 3)), 4) / (1 - pow(sqrt(abs(2 + y)), 3)));
    b = (4 * pow(sin(x * pi / 180), 3)) / (pow(1 + cos(5 * x * pi / 180), 2)) + cos(80 * pi / 180);
    c = a + b;
    cout << "c = " << c;
}

