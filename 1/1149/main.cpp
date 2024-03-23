// https://www.acmicpc.net/problem/1149
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int	N;

int rgb[1000][3];

void Solve()
{
	cin >> N;
	cin >> rgb[0][0];
	cin >> rgb[0][1];
	cin >> rgb[0][2];
	for (int i = 1 ; i < N ; ++i)
	{
		int r, g, b;
		cin >> r >> g >> b;
		rgb[i][0] = min(rgb[i - 1][1] + r, rgb[i - 1][2] + r);
		rgb[i][1] = min(rgb[i - 1][0] + g, rgb[i - 1][2] + g);
		rgb[i][2] = min(rgb[i - 1][0] + b, rgb[i - 1][1] + b);
	}
	int ans = min(rgb[N - 1][0], rgb[N - 1][1]);
	ans = min(ans, rgb[N - 1][2]);
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
