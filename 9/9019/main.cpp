// https://www.acmicpc.net/problem/9019
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

int	T;
short n, t_n;
bool visit[10000];

int D(int t)
{
	t = 2 * t % 10000;
	return (t);
}

int S(int t)
{
	if (t == 0)
		t = 9999;
	else
		t = t - 1;
	return (t);
}

int L(int t)
{
	t = t * 10 % 10000 + t / 1000;
	return (t);
}

int R(int t)
{
	t = t % 10 * 1000 + t / 10;
	return (t);
}

char c[4] = { 'D', 'S', 'L', 'R'};

void Solve()
{
	cin >> T;
	for (int i = 0 ; i < T ; ++i)
	{
		cin >> n >> t_n;
		queue<pair<short, int> > q;
		q.push({n, 4});
		fill_n(visit, 10000, 0);
		visit[n] = true;
		while (true)
		{
			if (q.front().first == t_n)
			{
				int ans_i = q.front().second;
				string ans = "";
				while (ans_i != 4)
				{
					ans = c[ans_i % 4] + ans;
					ans_i /= 4;
				}
				cout << ans << "\n";
				break ;
			}
			int size = q.size();
//			cout << "size : " << size << "\n";
			if (visit[D(q.front().first)] == false)
			{
				visit[D(q.front().first)] = true;
				q.push({D(q.front().first), q.front().second * 4 + 0});
			}
			if (visit[S(q.front().first)] == false)
			{
				visit[S(q.front().first)] = true;
				q.push({S(q.front().first), q.front().second * 4 + 1});
			}
			if (visit[L(q.front().first)] == false)
			{
				visit[L(q.front().first)] = true;
				q.push({L(q.front().first), q.front().second * 4 + 2});
			}
			if (visit[R(q.front().first)] == false)
			{
				visit[R(q.front().first)] = true;
				q.push({R(q.front().first), q.front().second * 4 + 3});
			}
			q.pop();
		}
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
