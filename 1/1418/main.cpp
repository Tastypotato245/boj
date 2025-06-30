// https://www.acmicpc.net/problem/1418
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int cnt;
int	N, K;

void Solve()
{
	cin >> N >> K;

	// 모든 N에 대해
	for (int n = 1 ; n <= N ; ++n)
	{
		int tmp_n = n;
		// 2보다 크고 K보다는 작거나 같은 k로 계속 나누어도
		for (int k = 2 ; k <= K ; ++k)
		{
			while (tmp_n % k == 0) // (계속 나누어 떨어질 때까지 나눔)
				tmp_n /= k;
		}

		// K보다 큰 수가 남는다면
		if (tmp_n > K)
			continue ; // 소인수 중 최댓값이 K 보다 큰 것임
		// 아니라면
		else
			++cnt; // 소인수 중 최댓값이 K보다 크지 않은 것임
	}

	cout << cnt;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
