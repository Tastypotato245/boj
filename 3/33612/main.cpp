// https://www.acmicpc.net/problem/33612
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;

	int month = (8 + 7 * (N - 1)) % 12;
	int year = 2024 + (8 + 7 * (N - 1)) / 12;
	if (month == 0)
	{
		month = 12;
		year -= 1;
	}
	cout << year << " " << month;
		
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
