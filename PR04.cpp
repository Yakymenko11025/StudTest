#include <iostream>
#include<math.h>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int m, n, s;
	double V, X, Z, C;
	cout << "Введіть ціну" << endl;
	cout << "Грн.=" << endl;
	cin >> m;
	cout << "Коп.=" << endl;
	cin >> n;
	cout << "Введіть кошти, грн.=";
	cin >> s;
	V = double (n) / 100;
	Z = m + V;
	X = s / Z;
	cout << "кількість зошитів = " << X << endl;
}

