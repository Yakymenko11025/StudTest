#include<iostream>
#include"math.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int a;
	cout << "Enter a" << endl;
	cin >> a;
	//cout << "Enyer b" << endl;
	//cin >> b;
	(a/2) ? cout << "\n a парне" : cout << "\n a непарне";
}



