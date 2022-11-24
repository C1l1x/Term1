#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int n = 0, i = 1, a, b, c;
    cout << "Insert n:"; cin >> n;
    // Geting user input

    while (n != i) {
        a = i;
        while (a != 0) {
            b = a % 10;
            if (b == 0) break;
            c = i / b;
            if (!(c * b == i))break;
            a /= 10;
            if (a == 0 ) {
                cout << i << endl;
            }
        }
        i++;
    }
    cout << "End!" << endl;
    return 0;
}