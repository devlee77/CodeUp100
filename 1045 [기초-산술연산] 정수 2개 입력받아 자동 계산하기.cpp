#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;

	cin >> a >> b;
	cout << a + b << "\n";
	cout << a - b << "\n";
	cout << a * b << "\n";
	cout << a / b << "\n";
	cout << a % b << "\n";
	printf("%.2lf", (double)a / (double)b);

	return 0;
}