// https://www.acmicpc.net/problem/1865
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;
using tiii = tuple<int, int, int>;

int	TC, N, M, W;

void Solve()
{
	cin >> TC;

	for (int tc = 0 ; tc < TC ; ++tc)
	{
		cin >> N >> M >> W;
		
		vector<tiii> v;
		int S, E, T;

		for (int i = 0 ; i < M ; ++i)
		{
			cin >> S >> E >> T;
			v.push_back({S, E, T});
			v.push_back({E, S, T});
		}

		for (int i = 0 ; i < W ; ++i)
		{
			cin >> S >> E >> T;
			v.push_back({S, E, -T});
		}
			
		int distance[N + 1];
		int s, e, t;
		fill(distance, distance + N + 1, 1000000000);
		for (int i = 0 ; i < N - 1 ; ++i)
			for (int j = 0 ; j < v.size(); ++j)
			{
				tie(s, e, t) = v[j];
				distance[e] = min(distance[e], distance[s] + t);
			}

		bool isYes = false;
		for (int j = 0 ; j < v.size() ; ++j)
		{
			tie(s, e, t) = v[j];
			if (distance[e] > distance[s] + t)
			{
				isYes = true;
				break;
			}
		}
		cout << (isYes ? "YES" : "NO") << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
