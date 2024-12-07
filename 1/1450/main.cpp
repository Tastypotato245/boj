// https://www.acmicpc.net/problem/1450
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

long long N, C;

vector<ll> combi(const vector<ll> & v)
{
	vector<ll> result(1 << v.size());
	for (int i = 0 ; i < result.size() ; ++i)
		for (int j = 0 ; j < v.size() ; ++j)
			if (i & (1 << j))
				result[i] += v[j];
	return result;
}

void Solve()
{
	cin >> N >> C;
	vector<ll> v(N);
	for (int i = 0 ; i < N ; ++i)
		cin >> v[i];
	sort(v.begin(), v.end());
	vector<ll> a = combi(vector<ll>(v.begin(), v.begin() + N / 2));
	vector<ll> b = combi(vector<ll>(v.begin() + N / 2, v.end()));
	sort(b.begin(), b.end());
	long long ans = 0;
	for (auto item : a)
		ans += upper_bound(b.begin(), b.end(), C - item) - b.begin();
	cout << ans;
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
