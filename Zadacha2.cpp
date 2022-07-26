#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n, i = 1, a, b;
    cout << "Insert n: "; cin >> n;

    while (n != i) {
        a = i;
        while (a != 0) {
            b = a % 10;
            cout << b << endl;
        }
    }
    system("pause");
    return 0;
}