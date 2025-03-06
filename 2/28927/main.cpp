// https://www.acmicpc.net/problem/28927
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	t, e, f;

void Solve()
{
	cin >> t >> e >> f;
	int total_time_max = t * 3 + e * 20 + f * 120;

	cin >> t >> e >> f;
	int total_time_mel = t * 3 + e * 20 + f * 120;

	if (total_time_max > total_time_mel)
		cout << "Max";
	else if (total_time_max < total_time_mel)
		cout << "Mel";
	else
		cout << "Draw";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
