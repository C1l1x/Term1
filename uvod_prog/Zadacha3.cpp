#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	system("chcp 1251");
	int m, N;
	float a, r, x, y, l;
	int i = 0, brT = 0, brI = 0;

	cout << "�������� m: "; cin >> m;
	cout << "�������� N: "; cin >> N;
	cout << "�������� a: "; cin >> a;
	cout << "�������� r: "; cin >> r;
	do
	{
		cout << "�������� x: "; cin >> x;
		cout << "�������� y: "; cin >> y;

		brI++;

		l = x * x * y * y;
		if (l <= r * r)
		{
			brT += 10;
		}
		else if (abs(x) <= a && abs(y) <= a);
		{
			brT += 5;
		}
		
		{
			brT = brT;
		}
	} while (brT < N && brI < m);
	cout << "���� �����: " << brT << endl;
	cout << "���� ��������: " << brI << endl;

}