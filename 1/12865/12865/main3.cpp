// https://www.acmicpc.net/problem/12865
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int	N, K;

vector<pair<int, int> > v;
int arr[101][100001];
bool vis[101][100001];

int Recur(int i, int j)
{
	if (vis[i][j] || i == 0)
		return (arr[i][j]);
	vis[i][j] = true;
	if (v[i].first > j)
		return (arr[i][j] = Recur(i - 1, j));
	else
		return (arr[i][j] = max(Recur(i - 1, j), Recur(i - 1, j - v[i].first) + v[i].second));
}

void Solve()
{
	cin >> N >> K;
	v.resize(N + 1);
	for (int i = 1 ; i <= N ; ++i)
		cin >> v[i].first >> v[i].second;
	cout << Recur(N, K) << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
