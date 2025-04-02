// https://www.acmicpc.net/problem/1769
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int cnt;
string s;

void Solve()
{
	cin >> s;
	while (s.size() > 1)
	{
		int sum = 0;
		for (char c : s)
			sum += c - '0';
		s = to_string(sum);
		++cnt;
	}

	cout << cnt << "\n";
	if (stoi(s) % 3 == 0)
		cout << "YES";
	else
		cout << "NO";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
