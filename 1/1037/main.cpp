// https://www.acmicpc.net/problem/1037
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N;
vector<int> v;

void Solve()
{
	cin >> N;
	v.resize(N);

	for (int i = 0 ; i < N ; ++i)
		cin >> v[i];
	sort(v.begin(), v.end());
	cout << v.front() * v.back() << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
