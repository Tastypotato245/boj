// https://www.acmicpc.net/problem/5357
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N;

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
	{
		string s;
		cin >> s;
		char pre = '0';
		for (int j = 0 ; j < s.size() ; ++j)
		{
			if (s[j] == pre)
				continue ;
			cout << s[j];
			pre = s[j];
		}
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
