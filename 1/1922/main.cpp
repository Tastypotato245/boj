// https://www.acmicpc.net/problem/1922
// github/Tastypotato245
// prim's
#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int	N, M;
bool vitArr[1001];
int ans;
vector<int> vit;
vector<pair<int, int> > vec[1001];

void Solve()
{
	cin >> N >> M;
	int a, b, c;
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> a >> b >> c;
		vec[a].push_back({b, c});
		vec[b].push_back({a, c});
	}
	vit.push_back(1);
	vitArr[1] = true;
	for (int cnt = 1 ; cnt < N ; ++cnt)
	{
		int min_val = INT_MAX;
		int min_v;
		for (int i = 0 ; i < cnt ; ++i)
		{
			for (int j = 0 ; j < vec[vit[i]].size() ; ++j)
			{
				if (vitArr[vec[vit[i]][j].first])
					continue ;
				if (min_val >= vec[vit[i]][j].second)
				{
					min_val = vec[vit[i]][j].second;
					min_v = vec[vit[i]][j].first;
				}
			}
		}
	//	cout << min_v << ": " << min_val << "\n";
		ans += min_val;
		vit.push_back(min_v);
		vitArr[min_v] = true;
	}
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
