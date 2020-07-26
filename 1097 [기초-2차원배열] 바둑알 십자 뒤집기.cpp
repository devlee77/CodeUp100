#include<iostream>
#include<cmath>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, x, y;

	int arr[20][20];

	for (int i = 1; i < 20; i++) {
		for (int j = 1; j < 20; j++) {
			int a;
			cin >> a;
			arr[i][j] = a;
		}
	}

	cin >> n;

	while (n > 0) {
		cin >> x >> y;
		for (int i = 1; i < 20; i++) {
			arr[x][i] = !arr[x][i];
			arr[i][y] = !arr[i][y];
		}
		n--;
	}

	for (int i = 1; i < 20; i++) {
		for (int j = 1; j < 20; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}