// https://www.acmicpc.net/problem/30999
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

void Solve()
{
	cin >> N >> M;

	int result = 0;
	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;

		int cnt = 0;
		for (char c : s)
			if (c == 'O')
				cnt++;

		if (cnt > M / 2)
			result++;
	}

	cout << result;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
