#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c;

	cin >> a >> b >> c;

	if (a % 2 == 0) cout << a <<"\n";
	if (b % 2 == 0) cout << b << "\n";
	if (c % 2 == 0) cout << c;
	return 0;
}