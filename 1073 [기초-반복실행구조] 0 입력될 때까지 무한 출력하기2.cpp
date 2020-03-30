#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;

	cin >> a;
	while (a != 0) {
		cout << a << "\n";
		cin >> a;
	}

	return 0;
}