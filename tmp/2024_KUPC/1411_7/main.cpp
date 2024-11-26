// https://www.acmicpc.net/problem/1411_7
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

long long N, ans;

void Solve()
{
	cin >> N;
	
	long long ans = 0;
	long long end_stage = 1;
	long long start_stage = 0;
	for (long long i = 2 ; i <= N ; ++i)
	{
		if (i % 4 == 1)
			ans += start_stage++;
		else if (i % 4 == 0)
			ans += end_stage++;
		else
			ans += i / 4;
	}

	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
