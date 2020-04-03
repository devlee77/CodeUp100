#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	char a;

	cin >> a;

	while (a != 'q') {
		cout << a << "\n";
		cin >> a;
	}
	cout << "q";

	return 0;
}