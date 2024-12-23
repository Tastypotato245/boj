// https://www.acmicpc.net/problem/22251
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int	N, K, P;
string X;

int cost_board[10][10] = 
{
	{0, 4, 3, 3, 4, 3, 2, 3, 1 ,2},
	{4, 0, 5, 3, 2, 5, 6, 1, 5, 4},
	{3, 5, 0, 2, 5, 4, 3, 4, 2, 3},
	{3, 3, 2, 0, 3, 2, 3, 2, 2, 1},
	{4, 2, 5, 3, 0, 3, 4, 3, 3, 2},
	{3, 5, 4, 2, 3, 0, 1, 4, 2, 1},
	{2, 6, 3, 3, 4, 1, 0, 5, 1, 2},
	{3, 1, 4, 2, 3, 4, 5, 0, 4, 3},
	{1, 5, 2, 2, 3, 2, 1, 4, 0, 1},
	{2, 4, 3, 1, 2, 1, 2, 3, 1, 0}
};

int ans;

void bf(string now, int cost, int depth)
{
	if (depth == K)
	{
		if (stoi(now) != stoi(X) && stoi(now) > 0 && stoi(now) <= N)
			++ans;
		return ;
	}

	for (int i = 0 ; i <= 9 ; ++i)
	{
		string next = now;
		next[depth] = '0' + i;
		int n_cost = cost + cost_board[now[depth] - '0'][i];
		if (n_cost <= P)
			bf(next, n_cost, depth + 1);
	}
}

void Solve()
{
	cin >> N >> K >> P >> X;
	if (X.size() < K)
		for (int i = 0 ; i < K - X.size() + 1 ; ++i)
			X = '0' + X;
	bf(X, 0, 0);
	cout << ans << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
