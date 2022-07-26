#include <iostream>
int main()
{
	using namespace std;

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		for (int number = i; number; number /= 10)
		{
			int last_digit = number % 10;
			sum += last_digit * last_digit * last_digit;
		}
		if (sum == i)
			cout << i << endl;
	}

	return 0;
}