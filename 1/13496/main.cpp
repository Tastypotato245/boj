// https://www.acmicpc.net/problem/13496
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	K;

void Solve()
{
	cin >> K;

	for (int k = 0 ; k < K ; ++k)
	{
		int n, s, day;

		cin >> n >> s >> day;

		int d[n], v[n];
		int ans = 0;

		for (int i = 0 ; i < n ; ++i)
		{
			cin >> d[i] >> v[i];
			if (s * day >= d[i])
				ans += v[i];
		}
		cout << "Data Set " << k + 1 << ":\n" << ans << "\n\n";
	}

}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
