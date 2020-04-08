#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long int a, b, c, d;
	double sum;
	
	cin >> a >> b >> c >> d;

	sum = a*b*c*d;

	printf("%.1lf MB", sum / 8 / 1024 / 1024);

	return 0;
}