// https://www.acmicpc.net/problem/1202
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
typedef pair<long long, long long> pll;

int	N, K;

vector<pll > jewel;
vector<long long> bag;
priority_queue<int, vector<int> > pq;
long long ans;

// 가방이 작은 것부터, 넣을 수 있는 보석 중 가장 가치가 큰 것을 넣으면 됨
void Solve()
{
	cin >> N >> K;

	bool choosen[N];
	fill(choosen, choosen + N, false);
	jewel.resize(N);
	for (int i = 0 ; i < N ; ++i)
		cin >> jewel[i].first >> jewel[i].second;
	sort(jewel.begin(), jewel.end());

	bag.resize(K);
	for (int i = 0 ; i < K ; ++i)
		cin >> bag[i];
	sort(bag.begin(), bag.end());

	int idx = 0;
	for (int i = 0 ; i < K ; ++i)
	{
		while (idx < N && jewel[idx].first <= bag[i])
		{
			pq.push(jewel[idx].second);
			idx++;
		}
		if (!pq.empty())
		{
			ans += pq.top();
			pq.pop();
		}
	}

	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
