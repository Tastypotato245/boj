// https://www.acmicpc.net/problem/26575
// github/Tastypotato245/boj

#include <bits/stdc++.h>

using namespace std;

int	N;

void Solve()
{
	int n; cin >> n;

	for (int i = 0; i < n; i++)
	{
		double d, f, p; cin >> d >> f >> p;

		double cost = d * f * p;
		cout.setf(ios::fixed); cout.precision(2);
		cout << "$" << cost << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
