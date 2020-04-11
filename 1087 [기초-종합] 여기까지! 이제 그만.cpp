#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a,sum;
	sum = 0;
	cin >> a;

	for (int i = 1; i <= a; i++) {
		sum += i;
		if (sum >= a) break;
	}

	cout << sum;

	return 0;
}