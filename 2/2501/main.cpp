// https://www.acmicpc.net/problem/2501
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int	N, K;

void Solve()
{
	cin >> N >> K;
	vector<int> v;

	for (int i = 1 ; i <= sqrt(N) ; ++i)
	{
		if (N % i == 0)
		{
			v.push_back(i);
			if (i != N / i)
				v.push_back(N / i);
		}
	}
	sort(v.begin(), v.end());
	if (v.size() <= K - 1)
		cout << 0;
	else
		cout << v[K - 1];
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
