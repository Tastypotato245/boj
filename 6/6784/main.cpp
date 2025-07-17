// https://www.acmicpc.net/problem/6784
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, ans;
char a;

void Solve()
{
	cin >> N;
	vector<char> v(N);

	for (auto& i : v)
		cin >> i;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		if (v[i] == a)
			ans++;
	}

	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
