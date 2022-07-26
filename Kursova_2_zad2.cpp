/*�������� �� k ���������� (������� � �������� �� ������� � ������) � m ����� (������� � ��������). �� �� ������� 
��������� � ������ �������� �� ��������� �������� �� �������, ����� ����� � ������� ���������,
�������� �� �������, ����� ����� ��� ������� ��������� � �.�. �� ���������� ���������.*/

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;


int main() {

    system("chcp 1251");

    int k, m;
    float x[50], y[50], r[50], xt[50], yt[50], a;

    cout << "�������� ���� �� ������������: "; cin >> k;
    for (int i = 0; i < k; i++) {
        cout << "�������� ����������� �� ��������� � " << 1 + i << endl;
        cout << "x= "; cin >> x[i];
        cout << "y= "; cin >> y[i];
        cout << "r= "; cin >> r[i];
    }

    cout << "�������� ���� �� �������: "; cin >> m;

    cout << "�������� ����������� �� �������:" << endl;

    for (int i = 0; i < m; i++) {
        cout << "����� � " << 1 + i << endl;
        cout << "x= "; cin >> xt[i];
        cout << "y= "; cin >> yt[i];
    }
    for (int i = 0; i < k; i++) {
        cout << "����� � ��������� � " << 1 + i << ": ";
        for (int j = 0; j < m; j++) {

            a = sqrtf((x[i] - xt[j]) * (x[i] - xt[j]) + (y[i] - yt[j]) * (y[i] - yt[j]));
            if (a < r[i])
                cout << 1 + j << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}