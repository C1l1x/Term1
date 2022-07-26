#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    {
        int i = 0, S = 0;
        do (i = i + 2, S = S + i);
        while (S < 1000);
        cout << S << endl;
        system("pause");
    }
}