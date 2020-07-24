#include<iostream>
#include<cmath>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x, y;
	cin >> x;

	int arr[10000] = {};

	for (int i = 0; i < x; i++) {
		cin >> y;
		arr[i] = y;
	}

	for (int i = x-1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	return 0;
}