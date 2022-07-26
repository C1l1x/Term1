#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#pragma warning(disable : 4996)
using namespace std;
FILE *fc;
int Br, k;
float s, sr;
void Create_File()
{
	fc = fopen("chisla.dat", "w + b");
	do {
		cout << "�����:= "; cin >> k;
		fwrite(&k, sizeof(k), 1, fc);
	} while (k != 0);
	fclose(fc);
}
void SrAr()
{
	s = 0; Br = 0;
	fc = fopen("chisla.dat", "rb");
	fread(&k, sizeof(k), 1, fc);
	while (!feof(fc))
	{
		if (k > 0) { s += k; Br++; }
		fread(&k, sizeof(k), 1, fc);
	}
	fclose(fc);
	if (Br > 0) sr = s / Br; else sr = 0;
	cout << "��. ��. = " << sr << endl;
}
int main()
{
	system("chcp 1251");
	Create_File();
	SrAr();
}