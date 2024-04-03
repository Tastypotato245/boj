// https://www.acmicpc.net/problem/1167
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>
#include <map>

using namespace std;

int	V, ans;
int totalVal[100001];
int tmpVal[100001];

void Solve()
{
	cin >> V;

	map<int, int> m[V + 1];
	queue<tuple<int, int, int> > q;

	for (int i = 0 ; i < V ; ++i)
	{
		int row, col, val;
		cin >> row;
		while (true)
		{
			cin >> col;
			if (col == -1)
				break ;
			cin >> val;
			m[row].insert({col, val});
		}
		if (m[row].size() == 1)
		{
			q.push({row, m[row].begin()->first, val});
			m[row].clear();
		}
	}
	int row = 0, col = 0, val = 0;
	while (!q.empty())
	{
		row = get<0>(q.front());
		col = get<1>(q.front());
		val = get<2>(q.front());
		q.pop();
		if (m[col].size() == 2)
		{
			m[col].erase(row);
			tmpVal[col] = max(tmpVal[col], totalVal[col] + val);
			totalVal[col] = max(totalVal[col], val);
			m[col].begin()->second += totalVal[col];
			q.push({col, m[col].begin()->first, m[col].begin()->second});
			m[row].clear();
		}
		else if (m[col].size() == 0 || m[col].size() == 1)
		{
			cout << max(tmpVal[col], totalVal[col] + val) << "\n";
			break ;
		}
		else
		{
			m[col].erase(row);
			tmpVal[col] = max(tmpVal[col], totalVal[col] + val);
			totalVal[col] = max(totalVal[col], val);
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
