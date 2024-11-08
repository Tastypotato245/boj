// https://www.acmicpc.net/problem/1644
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#define MAX_BOUND 4000000

using namespace std;

int	N;

bool num[MAX_BOUND + 1];
long long arr[300001];

void prime()
{
	fill(num, num + MAX_BOUND + 1, true);
	for (int i = 2 ; i * i <= MAX_BOUND ; ++i) 
		if (num[i])
			for (int j = i * i ; j <= MAX_BOUND; j += i)
				num[j] = false;

	int cnt = 1;
	for (int i = 2 ; i <= MAX_BOUND ; ++i)
		if (num[i])
		{
			arr[cnt] = arr[cnt - 1] + i;
			++cnt;
		}
}

void Solve()
{
	cin >> N;

	prime();
	int l = 0, r = 1, ans = 0;
	while (arr[r] != 0)
	{
		if (arr[r] - arr[l] == N)
		{
			++ans;
			++r;
		}
		else if (arr[r] - arr[l] > N)
			++l;
		else 
			++r;
	}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
