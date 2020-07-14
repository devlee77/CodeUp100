#include<iostream>
#include<cmath>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long int a, b, c;

	cin >> a >> b >> c;

	for (int i = c; i > 1; i--) {
		a *= b;
	}
	cout << a;

	return 0;
}