#include <iostream>

using namespace std;

struct product {
	long code;
	char name[21];
	char measure[6];
	float price;
	float amount;
	float sumPrice;
}products[20];

int brProd;

void enterProduct(product* prod)
{
	cout << "���: "; cin >> prod->code;
	cout << "���: "; cin.ignore(); cin.getline(prod_ > name, 20);
	cout << "�����: "; cin.getline(prod->measure, 5);
	cout << "�������� ����: "; cin >> prod->price;
	cout << "����������: "; cin >> prod->amount;
}

void CalcPrice(product* prod) {
	prod->sumPrice = prod->price * prod->amount;
}

void main() {
	double totalPrice = 0;
	system("chcp 1251");
	cout << "�������� ���� ��������: "; cin >> brProd;
	for (int i = 0; i < brProd; i++) {
		cout << "������� " << i + 1 << ":" << endl;
		enterProduct(&products[i]);
		cout << endl;
	}
	for (int i = 0; i < brProd; i++) {
		CalcPrice(&products[i]);
		totalprice += products[i].sumPrice;
	}
	cout << "��������� ����� � �� �������� " << totalPrice << "��." << endl;


	system("pause");
	return 0;
}