#include<iostream>
#include<cmath>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, x, y;

	cin >> n;

	int arr[20][20] = {};
	while (n > 0) {
		cin >> x >> y;
		arr[x][y] = 1;

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