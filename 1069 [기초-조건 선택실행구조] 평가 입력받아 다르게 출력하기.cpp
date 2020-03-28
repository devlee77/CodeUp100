#include<iostream>

using namespace std;

int main(void) {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	char a;

	cin >> a;

	switch (a)
	{
	case 'A':
		cout << "best!!!";
		break;
	case 'B':
		cout << "good!!";
		break;
	case 'C':
		cout << "run!";
		break;
	case 'D':
		cout << "slowly~";
		break;
	default:
		cout << "what?";
		break;
	}


	return 0;
}