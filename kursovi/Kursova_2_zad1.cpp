//Даден е двумерен масив Q с k реда и f стълба. Да се състави алгоритъм и напише програма, която 
//създава нов масив A, като стойността на Ai е равна на най-голямата отрицателна стойност в i-ия стълб на Q. 
#include <iostream>

using namespace std;

int main() {
	system("chcp 1251");
	int k, f, A[50];
	int Q[50][50];
	cout << "Въведете брой редове: "; cin >> k;
	cout << "Въведете брой стълбове: "; cin >> f;
	for (int i = 0; i < k; i++){
		for (int j = 0; j < f; j++)
			cin >> Q[i][j];
		A[i] = INT_MIN;
	}
	
	for (int i = 0; i < k; i++){
		for (int j = 0; j < f; j++)
			if (Q[j][i] < 0 && Q[j][i] > A[i])
				A[i] = Q[j][i];
	}
	for (int i = 0; i < f; i++) {
		cout << "Най-голямата отрицателна стойност в стълб " << i + 1 << ": ";
		if (A[i] == INT_MIN)
			cout << "Nqma!!!";
		else
			cout << A[i];
		cout << endl;
	}

		return 0;
}