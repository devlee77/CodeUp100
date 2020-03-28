#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c;

	cin >> a;

	if (a >= 90) cout << "A";
	else if (a >= 70 && a < 90) cout << "B";
	else if (a >= 40 && a < 70) cout << "C";
	else cout << "D";
	return 0;
}