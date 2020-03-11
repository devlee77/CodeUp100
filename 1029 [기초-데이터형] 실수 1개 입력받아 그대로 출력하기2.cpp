#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	double a;

	cin >> a;
	printf("%.11lf", a);


	return 0;
}