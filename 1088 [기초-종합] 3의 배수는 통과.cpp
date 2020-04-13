#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a;
	cin >> a;

	for (int i = 1; i <= a; i++) {
		if (i % 3 == 0) continue;
		else cout << i<<" ";
	}

	return 0;
}