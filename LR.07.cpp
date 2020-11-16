#include <iostream>
#include <iomanip> 
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
	int x, n = 3;
	cout << "Enter x =";
	cin >> x;
	float y, z;
	const double pi = 3.14;
	int sum = 0;
	for (int i = 1; i < 4; i++)
	{
		sum = sum + pow(x, i);
	}
    y = log(pow(x,3)) + cos(sum * pi / 180);
	int prod = 0;
	for (int i = 1; i < 10; i++) 
	{
		prod = prod * log(i * y);
	}
    z = cos(prod * pi / 180) / (y + 2);
	cout << "Y = " << y << endl;
	cout << "Z = " << z << endl;
}
