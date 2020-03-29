#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a;

	re:
	cin >> a;
	if (a != 0) {
		cout << a << "\n";
		goto re;
	}

	return 0;
}