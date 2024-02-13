// https://www.acmicpc.net/problem/18110

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int	N;
vector<short> v;

void Input()
{
	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; ++i)
		cin >> v[i];
	sort(v.begin(), v.end());
}

void Solve()
{
	int ans = 0;
	int sub = round((double)(N * 15) / 100);
	v.erase(v.begin(), v.begin() + sub);
	v.erase(v.end() - sub, v.end());
	for (int i = 0 ; i < v.size() ; ++i)
		ans += v[i];
	if (N == 0)
		ans = 0;
	else
		ans = round((double)ans / v.size());
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	Solve();
	return (0);
}
