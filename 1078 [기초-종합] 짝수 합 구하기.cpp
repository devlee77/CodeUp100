#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a;

	cin >> a;

	int sum = 0;
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	cout << sum;

	return 0;
}