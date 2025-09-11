// https://www.acmicpc.net/problem/19698
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

void Solve()
{
	int n, w, h, l;
	cin >> n >> w >> h >> l;
	int ans = (w / l) * (h / l);
	cout << (n < ans ? n : ans);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
