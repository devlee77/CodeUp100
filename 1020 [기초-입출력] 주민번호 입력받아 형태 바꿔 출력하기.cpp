#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x, y;

	scanf("%d-%d", &x, &y);

	printf("%06d%07d", x, y);


	return 0;
}