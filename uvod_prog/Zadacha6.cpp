#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
struct student {
	char ime[31];
	long FN;
	struct RoDat { int D, M, G; } rd;
	short gr;
	int oc[10];
	float sru;
};
int BrS;
student MasStud[25];
char bf[5];
void readStud(student* st)
{
	int i;
	cout << "���: "; gets_s(st->ime);
	cout << " ���� �� �������\n";
	cout << " ���:"; cin >> st->rd.D;
	cout << " �����:"; cin >> st->rd.M;
	cout << " ������:"; cin >> st->rd.G;
	cout << " ���. �����:"; cin >> st->FN;
	cout << "�����:"; cin >> st->gr;
	cout << "������ �� 10-�� ����������\n";
	for (i = 0; i < 10; i++)
	{
		cout << "�� " << i + 1 << "-� ����������:";
		cin >> st->oc[i];
	}
	gets_s(bf);
}
void writeStud(student st) {
	int i;
	cout << "���: " << st.ime << endl;
	cout << "���� �� �������: " << st.rd.D << "." <<
		st.rd.M << "." << st.rd.G << endl;
	cout << "���������� �����:" <<st.FN <<endl;
		cout << "�����: " << st.gr << endl;
	cout << " ������: ";
	for (i = 0; i < 10; i++) cout << " " << st.oc[i];
	cout << endl;
	cout << "������ �����: " << st.sru << endl;
}
void srUsp(student* st) {
	int j, s = 0;
	for (j = 0; j < 10; j++) s += st->oc[j];
	st->sru = s / 10.0;
}
void main() {
	system("chcp 1251");
	int i;
	cout << " ���� ��������:"; cin >> BrS;
	gets_s(bf);
	for (i = 0; i < BrS; i++) readStud(&MasStud[i]);
	for (i = 0; i < BrS; i++) srUsp(&MasStud[i]);
	for (i = 0; i < BrS; i++) writeStud(MasStud[i]);
	float s = 0;
	for (i = 0; i < BrS; i++)s += MasStud[i].sru;
	s /= BrS;
	cout << "������ ����� �� ������� " << s << endl;
}