// https://www.acmicpc.net/problem/6603
// github/Tastypotato245/boj

#include <iostream>
#include <algorithm>

using namespace std;

int	K;
int set_arr[13];

void dfs(int depth, int idx, int arr[6])
{
	if (depth == 6)
	{
		for (int i = 0 ; i < 6 ; ++i)
			cout << arr[i] << " ";
		cout << "\n";
		return ;
	}
	for (int i = idx ; i < K ; ++i)
	{
		arr[depth] = set_arr[i];
		dfs(depth + 1, i + 1, arr);
	}
}

void Solve()
{
	while (true)
	{
		cin >> K;
		if (K == 0)
			break ;
		for (int i = 0 ; i < K ; ++i)
			cin >> set_arr[i];
		int arr[6];
		dfs(0, 0, arr);
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
