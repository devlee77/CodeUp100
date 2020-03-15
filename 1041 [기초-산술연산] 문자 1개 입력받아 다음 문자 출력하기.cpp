#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	char a;

	cin >> a;

	printf("%c", a + 1);

	return 0;
}