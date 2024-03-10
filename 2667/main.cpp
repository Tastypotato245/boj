// https://www.acmicpc.net/problem/2667
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int	N;
queue<pair<int, int> > q;
vector<int> v;
bool visit[25][25];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int num;
int cnt;

void Solve()
{
	cin >> N;
	int arr[N][N];
	char tmp;
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < N ; ++j)
		{
			cin >> tmp;
			arr[i][j] = tmp - '0';
		}
	}
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < N ; ++j)
		{
			if (visit[i][j] == false && arr[i][j] == 1)
			{
				cnt = 1;
				++num;
				visit[i][j] = true;
				q.push({i, j});
				while (!q.empty())
				{
					int y = q.front().first;
					int x = q.front().second;
					for (int k = 0 ; k < 4 ; ++k)
					{
						int ty = y + dy[k];
						int tx = x + dx[k];
						if (ty >= 0 && ty < N && tx >= 0 && tx < N && visit[ty][tx] == false && arr[ty][tx] == 1)
						{
							visit[ty][tx] = true;
							++cnt;
							q.push({ty, tx});
						}
					}
					q.pop();
				}
				v.push_back(cnt);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << num << "\n";
	for (int i = 0 ; i < v.size() ; ++i)
		cout << v[i] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
