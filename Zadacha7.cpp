#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct{
	float x, y, r; 
	int br;
} tokr;
typedef struct {
	float x, y;
} ttoc;
tokr okr[20]; tokr t;
ttoc toc[25];
int brokr, brtoc;
void readOkr(tokr* ok) {
	cout << "x y :";
	cin >> ok->x; cin >> ok->y;
	cout << "r="; cin >> ok->r;
}
void readToc(ttoc* t) {
	cout << "x y :"; cin >> t->x; cin >> t->y;
}
void brToc(tokr* ok) {
	int j; float dx, dy;
	ok->br = 0;
	for (j = 0; j < brtoc; j++) {
		dx = toc[j].x - ok->x; dy = toc[j].y - ok->y;
		if (dx * dx + dy * dy <= ok->r * ok->r) ok->br++;
	}
}
void main() {
	int i, j;
	system("chcp 1251");
	cout << "���� �� ������������: "; cin >> brokr;
	for (i = 0; i < brokr; i++) readOkr(&okr[i]);
	cout << "���� �� ������� : "; cin >> brtoc;
	for (j = 0; j < brtoc; j++) readToc(&toc[j]);
	for (i = 0; i < brokr; i++) brToc(&okr[i]);
	cout << "���� �� ������� � ������������:\n";
	for (i = 0; i < brokr; i++) cout << "���" << i << ": " << okr[i].br << endl;
}