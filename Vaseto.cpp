#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<cstring>
using namespace std;
int main() {
    int br = 0;
    char Arr[31];
    system("chcp 1251");
    cout << "������ ��������� �� ������� ����: "; cin >> Arr;

    for (int i = 0; i < strlen(Arr); i++) {
        if (Arr[i] == '.') {
            br = br + 1;
        }
        if (Arr[i] == '^') {
            br = br + 2;
        }
        if (Arr[i] == '+') {
            br = br + 3;
        }
        if (Arr[i] == '*') {
            br = br + 4;
        }
        if (Arr[i] == 'x') {
            br = br + 5;
        }

    }
    cout << "���� ������� ���� �� ������ ��: " << br << endl;

    system("pause");
    return(0);

}