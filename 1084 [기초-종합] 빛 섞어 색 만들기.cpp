#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c, sum;
	sum = 0;

	cin >> a >> b >> c;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			for (int z = 0; z < c; z++) {
				cout << i << " " << j << " " << z << "\n";
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}