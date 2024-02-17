// https://www.acmicpc.net/problem/2630
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
short blue;
short white;
bool arr[128][128];

bool IsBlock(int len, int y, int x)
{
	for (int i = y ; i < y + len ; ++i)
		for (int j = x ; j < x + len ; ++j)
			if (arr[i][j] != arr[y][x])
				return (false);
	return (true);
}

void Recur(int len, int y, int x)
{
	if (len == 1 || IsBlock(len, y, x))
	{
		if (arr[y][x] == 0)
			++white;
		else
			++blue;
		return ;
	}
	len /= 2;
	Recur(len, y, x);
	Recur(len, y, x + len);
	Recur(len, y + len, x);
	Recur(len, y + len, x + len);
}

void Solve()
{
	cin >> N;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < N ; ++j)
			cin >> arr[i][j];
	Recur(N, 0, 0);
	cout << white << "\n";
	cout << blue << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
