#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
	int a, b;
	float h;
	cout << "Enter a =";
	cin >> a;
	cout << "Enter b =";
	cin >> b;
	cout << "Enter h =";
	cin >> h;
	float y, x = a;
	while (x <= b)
	{
		y = pow(x, 5) + pow(x, 1 / 2) - 3;
		cout << setw(10) << "x=" << x << setw(10) << "y=" << y << endl;
		x += h;
	}
}
