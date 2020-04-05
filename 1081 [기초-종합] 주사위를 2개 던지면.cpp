#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x, y;

	cin >> x >> y;

	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= y; j++) {
			cout << i << " " << j << "\n";
		}
	}

	return 0;
}