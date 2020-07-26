#include<iostream>
#include<cmath>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[101][101] = {};

	int x, y, n;

	cin >> x >> y;
	cin >> n;

	while (n > 0) {
		int i, d, a, b;
		cin >> i >> d >> a >> b;

		if (d == 1) {
			for (int k = 0; k < i; k++) {
				arr[a + k][b] = 1;
			}
		}
		else if (d == 0) {
			for (int k = 0; k < i; k++) {
				arr[a][b + k] = 1;
			}
		}

		n--;
	}

	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= y; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}


	return 0;
}