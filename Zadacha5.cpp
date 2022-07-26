#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstdio>
#pragma warning(disable : 4996)

using namespace std;

struct product {
	int kod;
	char ime[31];
	char mjarka[6];
	float ed_cena;
	float kolic;
};
FILE* fp;
char fime[31];
product prod;
void readProd(product* pr) {
	cout << "Code:"; cin >> pr->kod; getchar();
	cout << "Name:"; gets_s(pr->ime);
	cout << "Size:"; gets_s(pr->mjarka);
	cout << "Price:"; cin >> pr->ed_cena;
	cout << "Quantity:"; cin >> pr->kolic;
	getchar();
}
void writeProd(product pr) {
	cout << pr.kod << " " << pr.ime << " " << pr.mjarka << "<<pr.ed_cena<<" R"("<<pr.kolic<<endl;)";
}
void sazdaj() {
	fp = fopen(fime, "w"); fclose(fp);
	printf("������ � ��������!\n");
}
void dobavi() {
	fp = fopen(fime, "a+b");
	3;
		char ch;
	do {
		readProd(&prod);
		fwrite(&prod, sizeof(prod), 1, fp);
		cout << "��� (d/n)?";
		ch = getchar(); getchar();
	} while (ch != 'n');
	fclose(fp);
}
void promKol() {
	int kod;
	cout << "�������� ���:"; cin >> kod; getchar();
	fp = fopen(fime, "r+b");
	fread(&prod, sizeof(prod), 1, fp);
	while (!feof(fp)) {
		if (prod.kod == kod) {
			cout << "������� ���� ����������: ";
			cin >> prod.kolic; getchar();
			fseek(fp, -(long)sizeof(prod), SEEK_CUR);
			fwrite(&prod, sizeof(prod), 1, fp); break;
		}
		fread(&prod, sizeof(prod), 1, fp);
	}
	fclose(fp);
}
void calcMoney() {
	float sum = 0;
	fp = fopen(fime, "rb");
	fread(&prod, sizeof(prod), 1, fp);
	while (!feof(fp)) {
		sum += prod.kolic * prod.ed_cena;
		fread(&prod, sizeof(prod), 1, fp);
	}
	fclose(fp);
	cout << "��������� � ����: " << sum << endl;
}
void spisakMr() {
	char mjarka[6]; int k = 0;
	cout << "�������� �����:"; gets_s(mjarka);
	fp = fopen(fime, "rb");
	fread(&prod, sizeof(prod), 1, fp);
	while (!feof(fp)) {
		if (strcmp(prod.mjarka, mjarka) == 0 && prod.kolic > 0) {
			writeProd(prod);
			k++;
		}
		fread(&prod, sizeof(prod), 1, fp);
		4;
	}
	fclose(fp);
	cout << "��������: " << k << endl;
}
void spisAll() {
	int k = 0;
	fp = fopen(fime, "rb");
	fread(&prod, sizeof(prod), 1, fp);
	while (!feof(fp)) {
		writeProd(prod);
		k++;
		fread(&prod, sizeof(prod), 1, fp);
	}
	fclose(fp);
	cout << "��������: " << k << endl;
}
void readTxt() {
	FILE* txt; char buf[10];
	txt = fopen("Prod.txt", "rt");
	fp = fopen(fime, "a+b");
	fscanf(txt, "%d %s %s %f %f", &prod.kod, &prod.ime,
		&prod.mjarka, &prod.ed_cena, &prod.kolic);
	fgets(buf, 9, txt);
	while (!feof(txt)) {
		fwrite(&prod, sizeof(prod), 1, fp);
		fscanf(txt, "%d %s %s %f %f", &prod.kod, &prod.ime,
			&prod.mjarka, &prod.ed_cena, &prod.kolic);
		fgets(buf, 9, txt);
	}
	fclose(txt); fclose(fp);
	cout << "���������!\n";
}
void writeTxt() {
	FILE* txt;
	txt = fopen("Prod1.txt", "wt");
	fp = fopen(fime, "rb");
	fread(&prod, sizeof(prod), 1, fp);
	while (!feof(fp)) {
		if (prod.kolic > 0)
			fprintf(txt, "%4d %-30s %5.2f %8.3f %9.2f\n",
				prod.kod, prod.ime, prod.ed_cena, prod.kolic,
				prod.ed_cena * prod.kolic);
		fread(&prod, sizeof(prod), 1, fp);
	}
	fclose(fp); fclose(txt);
	cout << "���� Prod1.txt ��������!\n";
}
int main() {
	5;
		system("chcp 1251");
	char otg[3];
	cout << "������� ��� �� ����:"; gets_s(fime);
	do {
		cout << " ����\n";
		cout << " 1. ��������� �� ������\n";
		cout << " 2. �������� �� �������\n";
		cout << " 3. ������� �� ���������� �� ���\n";
		cout << " 4. ����������� �� ����\n";
		cout << " 5. ������ �� �������� ��� ��� �����\n";
		cout << " 6. ������ �� ������\n";
		cout << " 7. ������ �� ����� ����\n";
		cout << " 8. ��������� � ����� ����\n";
		cout << "����� (0-����):"; gets_s(otg);
		switch (otg[0]) {
		case '1':sazdaj(); break;
		case '2':dobavi(); break;
		case '3':promKol(); break;
		case '4':calcMoney(); break;
		case '5':spisakMr(); break;
		case '6':spisAll(); break;
		case '7':readTxt(); break;
		case '8':writeTxt(); break;
		}
	} while (otg[0] != '0');
	return 0;
}