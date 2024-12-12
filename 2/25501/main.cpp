// https://www.acmicpc.net/problem/25501
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	T;

void Solve()
{
	cin >> T;

	for (int t = 0 ; t < T ; ++t)
	{
		string s;
		cin >> s;
		int ans = 0 ;
		bool isPal = true;
		for (int i = 0 ; i <= s.size() / 2 ; ++i)
		{
			++ans;
			if (s[i] != s[s.size() - 1 - i])
			{
				isPal = false;
				break ;
			}
		}
		cout << isPal << " " << ans << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
