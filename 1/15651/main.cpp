// https://www.acmicpc.net/problem/15651
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	N, M;
int ans_arr[7];

void dfs(int depth)
{
	if (depth == M)
	{
		for (int i = 0 ; i < M ; ++i)
			cout << ans_arr[i] << " ";
		cout << "\n";
		return ;
	}
	for (int i = 1 ; i <= N ; ++i)
	{
		ans_arr[depth] = i;
		dfs(depth + 1);
	}
}

void Solve()
{
	cin >> N >> M;
	dfs(0);
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
