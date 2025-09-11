// https://www.acmicpc.net/problem/24365
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

using ii = pair<int,int>;
vector <ii> v(3);
int ans, avg;

void Solve()
{
    v[0].second = 0; v[1].second = 1; v[2].second = 2;
    cin >> v[0].first >> v[1].first >> v[2].first;
    avg = (v[0].first + v[1].first + v[2].first) / 3;
    sort(v.begin(), v.end());
    cout << abs(v[2].second - v[0].second) * (avg - v[0].first) + abs(v[2].second - v[1].second) * (avg - v[1].first);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
