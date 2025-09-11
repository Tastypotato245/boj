// https://www.acmicpc.net/problem/2470
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	N;
int res[100000];
int ans = 2000000001;
int ans_l = 0;
int ans_r = 0;

// 전형적인 투 포인터
void Solve()
{
	// INPUT
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		cin >> res[i];

	sort(res, res + N);

	int l = 0, r = N - 1;
	while (l < r)
	{
		int candidate = res[l] + res[r];

		if (abs(candidate) < abs(ans))
		{
			ans = candidate;
			ans_l = res[l];
			ans_r = res[r];
		}

		if (candidate > 0)
			r--;
		else if (candidate < 0)
			l++;
		else
			break ;
	}
	cout << ans_l << " " << ans_r;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
