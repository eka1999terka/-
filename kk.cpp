#include "stdafx.h"
#include <iostream>
#include<math.h> 

using namespace std;

void MM(int a, int  b, int c)
{
	setlocale(LC_ALL, "Russian");
	int D;
	float x1, x2;
	if (((a == 0) && (b == 0)) || ((a == 0) && (b == 0) && (c == 0)))
		cout << "Не разрешенное уравнение" << endl;
	else
	{
		if (a == 0)
			cout << "Линейное уравнение" << endl;
		else
		{
			D = pow(b, 2) - 4 * a * c;
			if (D > 0)
			{
				x1 = (-b + sqrt(D)) / (2 * a);
				x2 = (-b - sqrt(D)) / (2 * a);
				cout << "x1 = " << x1 << "\n" << "x2 = " << x2 << " " << endl;
			}
			if (D == 0)
				cout << "x1 = x2 =" << " " << -b / (2 * a) << endl;
			if (D < 0)
				cout << "Нет корней" << endl;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, D;
	cout << "Введите a" << endl;
	cin >> a;
	cout << "Введите b" << endl;
	cin >> b;
	cout << "Введите c" << endl;
	cin >> c;
	MM(a, b, c);
}

