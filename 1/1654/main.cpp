// https://www.acmicpc.net/problem/1654

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<long long> v;

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long	n;
	long long	k;
	long long	ans = 0;
	long long	tmp;
	long long	r = 0;

	cin >> k >> n;
	for (int i = 0; i < k; ++i)
	{
		cin >> tmp;
		v.push_back(tmp);
		r = max(r, tmp);
	}

	long long	l = 1;
	long long	i;
	while (l <= r)
	{
		i = (l + r) / 2;
		int cnt = 0;
		for (int j = 0; j < v.size(); ++j)
			cnt += v[j] / i;
		if (cnt >= n)
		{
			l = i + 1;
			ans = max(ans, i);
		}
		else
			r = i - 1;
	}
	cout << ans << "\n";
	return (0);
}
