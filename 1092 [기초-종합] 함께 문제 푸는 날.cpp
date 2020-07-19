#include<iostream>
#include<cmath>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c, day;
	cin >> a >> b >> c;

	day = 1;

	while (day%a != 0 || day%b != 0 || day%c != 0) day++;

	cout << day;
	return 0;
}