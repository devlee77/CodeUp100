#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c;

	cin >> a >> b >> c;

	printf("%d", (a > b ? b : a) > c ? c:(a > b ? b : a));

	return 0;
}