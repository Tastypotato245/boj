// https://www.acmicpc.net/problem/2805
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int	M;
int H;

void Solve()
{
	cin >> N >> M;
	int trees[N];
	for (int i = 0 ; i < N ; ++i) cin >> trees[i];

	int left = 0, right = 1000000000;
	int mid;
	while (left <= right)
	{
		long long sum = 0;
		mid = (left + right) / 2;
		for (int i = 0 ; i < N ; ++i)
			if (trees[i] - mid > 0)
				sum += trees[i] - mid;
//		cout << "mid: " << mid << "\n";
//		cout << "\tsum: " << sum << "\n";
		if (sum < M)
			right = mid - 1;
		else
		{
			H = max(H, mid);
			left = mid + 1;
		}
	}
	cout << H << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
