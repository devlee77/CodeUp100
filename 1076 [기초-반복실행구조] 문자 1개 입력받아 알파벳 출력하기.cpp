#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	char a, b;

	cin >> a;
	b = 'a';
	do {
		cout <<b<<" ";
		b++;
	} while (a >= b);
	
	return 0;
}