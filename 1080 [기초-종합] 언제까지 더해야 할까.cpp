#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a;

	cin >> a;
	
	int i, sum;
	i = 0;
	sum = 0;

	while (sum < a) {
		sum += i;
		i++;
	}

	cout << i - 1;
	return 0;
}