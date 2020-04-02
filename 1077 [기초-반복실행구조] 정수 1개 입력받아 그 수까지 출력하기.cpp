#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a;

	cin >> a;

	for (int i = 0; i <= a; i++) {
		cout << i << "\n";
	}
	
	return 0;
}