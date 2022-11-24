#include<iostream>
#include<stdlib.h>

using namespace std;

int brCif(long m) {
	int brc = 0;
	while (m > 0) {
		brc++; m /= 10;
	}
	return brc;
}
int sumCif(long m) {
	int c, s = 0;
	while (m > 0) {
		c = m % 10;
		s += c;
		m /= 10;
	}
	return s;
}
int main() {
	long m;
	system("chcp 1251");
	printf("�������� �����:"); cin >> m;
	printf("���� �����: %d\n", brCif(m));
	printf("���� �����: %d\n", sumCif(m));
	system("pause");
	return 0;
}