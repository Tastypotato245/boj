// https://www.acmicpc.net/problem/9251
// github/Tastypotato245
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <unistd.h>

using namespace std;

int val[1001][1001];
bool check[1001][1001];
bool visit[1001][1001];

string a, b;

void Solve()
{
	cin >> a >> b;
	for (int i = 0 ; i < a.size() ; ++i)
		for (int j = 0 ; j < b.size() ; ++j)
			if (a[i] == b[j])
				check[i][j] = true;

	//	for (int i = 0 ; i < a.size() ; ++i)
	//	{
	//		for (int j = 0 ; j < b.size() ; ++j)
	//			cout << check[i][j] << " ";
	//		cout << "\n";
	//	}
	//	cout << "\n";

	queue<pair<int, int> > q;
	q.push({a.size() - 1, b.size() - 1});
	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		if (y >= 0 && x >= 0 && visit[y][x] == false)
		{
			visit[y][x] = true;
			if (check[y][x])
				val[y][x] = val[y + 1][x + 1] + 1;
			else
				val[y][x] = max(val[y + 1][x], val[y][x + 1]);
			q.push({y - 1, x});
			q.push({y, x - 1});
		}
/*		// For Debug
		system("clear");
		for (int i = 0 ; i < a.size() ; ++i)
		{
			for (int j = 0 ; j < b.size() ; ++j)
				cout << check[i][j] << " ";
			cout << "\n";
		}
		cout << "\n";
		for (int i = 0 ; i < a.size() ; ++i)
		{
			for (int j = 0 ; j < b.size() ; ++j)
				cout << visit[i][j] << " ";
			cout << "\n";
		}
		cout << "\n";
		for (int i = 0 ; i < a.size() ; ++i)
		{
			for (int j = 0 ; j < b.size() ; ++j)
				cout << val[i][j] << " ";
			cout << "\n";
		}
		usleep(100000);
		*/
	}

//	for (int i = 0 ; i < a.size() ; ++i)
//	{
//		for (int j = 0 ; j < b.size() ; ++j)
//			cout << val[i][j] << " ";
//		cout << "\n";
//	}

	cout << val[0][0] << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
