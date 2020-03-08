#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a;
	cin >> a;

	cout << "[" << a / 10000 * 10000 << "]\n";
	cout << "[" << a % 10000 /1000 * 1000 << "]\n";
	cout << "[" << a % 1000 / 100 * 100 << "]\n";
	cout << "[" << a % 100 / 10 * 10 << "]\n";
	cout << "[" << a % 10 << "]\n";


	return 0;
}