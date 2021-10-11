#include <iostream>
using namespace std;

int main() {
	int i, j;
	bool isprime;
	int a, b;
	int sum = 0;
	cin >> a >> b;
	for (i = a; i < b; i++) {
		isprime = true;
		for (j = 2; j <= i / 2; j++)
			if ((i % j) == 0) isprime = false;

		if (isprime)
			sum += i * i;
	}
	cout << sum;

	return 0;
}
