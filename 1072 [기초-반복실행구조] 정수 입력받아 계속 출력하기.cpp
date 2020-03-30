#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;

	cin >> a;
	
re:
	a--;
	cin >> b;
	cout << b << "\n";
	if (a != 0) goto re;

	return 0;
}