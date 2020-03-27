#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c;

	cin >> a;

	if (a < 0) {
		cout << "minus\n";
		if (a % 2 == 0) {
			cout << "even\n";
		}
		else cout << "odd\n";
	}
	else if (a > 0) {
		cout << "plus\n";
		if (a % 2 == 0) {
			cout << "even\n";
		}
		else cout << "odd\n";
	}

	
	return 0;
}