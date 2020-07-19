#include<iostream>
#include<cmath>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long int a, m, d, n;

	cin >> a >> m >> d >> n;

	for (int i = n; i > 1; i--) {
		a = (a * m) + d;
	}

	cout << a;

	return 0;
}