// https://www.acmicpc.net/problem/5928
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	D, H, M, total_m;

void Solve()
{
	cin >> D >> H >> M;

	if (D < 11 || \
			(D == 11 && H < 11) || \
			(D == 11 && H == 11 && M < 11))
	{
		cout << -1;
		return ;
	}

	if (M - 11 >= 0)
		total_m += M - 11;
	else
	{
		total_m += 60 + M - 11;
		H--;
	}

	if (H - 11 >= 0)
		total_m += (H - 11) * 60;
	else
	{
		total_m += (24 + (H - 11)) * 60;
		D--;
	}

	if (D - 11 >= 0)
		total_m += (D - 11) * 24 * 60;

	cout << total_m;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
