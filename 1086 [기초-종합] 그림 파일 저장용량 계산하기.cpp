#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long int a, b, c;
	double sum;

	cin >> a >> b >> c;

	sum = a*b*c;

	printf("%.2lf MB", sum / 8 / 1024 / 1024);

	return 0;
}