// https://www.acmicpc.net/problem/1030
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	s, N, K, r1, r2, c1, c2;

int recur(int i, int j, int l)
{
	int center = l / N;
	// len가 1이면 1칸이니까 그냥 0
	if (l == 1)
		return (0);
	// 중심 검정에 해당하는지 체크.
	if (j < center * ((N + K) / 2) && j >= center * ((N - K) / 2) && \
			i < center * ((N + K) / 2) && i >= center * ((N - K) / 2))
		return (1);
	i %= center;
	j %= center;
	return recur(i, j, l / N);
}

void Solve()
{
	cin >> s >> N >> K >> r1 >> r2 >> c1 >> c2;
	for (int i = r1 ; i <= r2 ; ++i)
	{
		for (int j = c1 ; j <= c2 ; ++j)
			cout << recur(i, j, pow(N, s));
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
