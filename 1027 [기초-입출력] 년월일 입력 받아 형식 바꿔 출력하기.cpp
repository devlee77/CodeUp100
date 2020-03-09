#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c;

	scanf("%d.%d.%d", &a, &b, &c);

	printf("%02d-%02d-%04d", c, b, a);


	return 0;
}