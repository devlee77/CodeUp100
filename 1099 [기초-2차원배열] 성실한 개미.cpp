#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[11][11] = {};

	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			int a;
			cin >> a;
			arr[i][j] = a;
		}
	}

	int x, y;
	x = 2; y = 2;
	
	while (arr[x][y] != 2) {
		arr[x][y] = 9;
		if (arr[x][y + 1] != 1) y += 1;
		else if (arr[x + 1][y] != 1) x += 1;
		else break;
	}
	arr[x][y] = 9;
	

	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}