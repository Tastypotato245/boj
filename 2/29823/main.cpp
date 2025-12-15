// https://www.acmicpc.net/problem/29823
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N;

void Solve()
{
	cin >> N;

	string s;
	cin >> s;

	int north = 0, south = 0, east = 0, west = 0;

	for (char c : s)
	{
		if (c == 'N') north++;
		else if (c == 'S') south++;
		else if (c == 'E') east++;
		else if (c == 'W') west++;
	}

	int result = abs(north - south) + abs(east - west);
	cout << result;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Solve();
	return 0;
}
