#include <math.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int kvUrav(float a, float b, float c, float* x1, float* x2)
{
	float d = b * b - 4 * a * c;
	if (d < 0) return 0;
	if (d == 0) {
		*x1 = *x2 = -b / (2 * a);
		return 1;
	}
	else {
		d = sqrt(d);
		*x1 = (-b - d) / (2 * a);
		*x2 = (-b + d) / (2 * a);
		return 2;
	}
}
int main() {
	float a, b, c, x1, x2;
	int brk;
	system("chcp 1251");
	printf("�������� ����������� a b c:");
	scanf_s("%f %f %f", &a, &b, &c);
	brk = kvUrav(a, b, c, &x1, &x2);
	switch (brk) {
	case 0: printf("���� �.�.\n"); break;
	case 1: printf("x1=x2=%f\n", x1); break;
	case 2: printf("x1=%f x2=%f\n", x1, x2); break;
	}
	system("pause");
	return 0;
}
