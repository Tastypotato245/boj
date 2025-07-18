// https://www.acmicpc.net/problem/18698
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;


int N;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		string s;
		int ans = 0;
		cin >> s;
		for (char c : s)
		{
			if (c == 'D' || c == '\n')
				break ;
			++ans;
		}
		cout << ans << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
