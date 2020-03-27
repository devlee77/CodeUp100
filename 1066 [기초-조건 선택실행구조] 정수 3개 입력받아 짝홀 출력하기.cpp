#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c;

	cin >> a >> b >> c;

	if (a % 2 == 0) {
		cout << "even\n";
	}
	else cout << "odd\n";
	if (b % 2 == 0) {
		cout << "even\n";
	}
	else cout << "odd\n";
	if (c % 2 == 0) {
		cout << "even\n";
	}
	else cout << "odd";

	return 0;
}