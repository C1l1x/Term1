#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    system("chcp 1251");
    float x, a, b;
    cout << "Insert x: "; cin >> x;

    if (x > 2) {
        a = x * x + 4 * x + 5;
        float b = 1 / a;
        cout << "F(x)= " << b << endl;
    }
    else {
        a = x * x + 4 * x + 5;
        cout << "F(x)= " << a << endl;
    }

    system("pause");
    return 0;
}