#include<iostream>
#include<cmath>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x, y;
	cin >> x;

	int arr[24] = {};

	while (x > 0) {
		cin >> y;
		arr[y] += 1;

		x--;
	}

	for (int i = 1; i < 24; i++) {
		cout << arr[i]<<" ";
	}

	return 0;
}