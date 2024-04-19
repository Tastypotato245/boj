// https://www.acmicpc.net/problem/11404
// github/Tastypotato245

#include <iostream>
#include <algorithm>
#define INF (1000000000)

using namespace std;

int	N, M;
int arr[100][100];

void Solve()
{
	cin >> N >> M;
	for (int i = 0 ; i < N ; ++i)
		for (int j = 0 ; j < N ; ++j)
			if (i != j) arr[i][j] = INF;
	int a, b, tmp;
	for (int i = 0 ; i < M ; ++i)
	{
		cin >> a >> b >> tmp;
		arr[a - 1][b - 1] = min(arr[a - 1][b - 1], tmp);
	}
	for (int k = 0 ; k < N ; ++k)
		for (int i = 0 ; i < N ; ++i)
			for (int j = 0 ; j < N ; ++j)
				arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
	for (int i = 0 ; i < N ; ++i)
	{
		for (int j = 0 ; j < N ; ++j)
			cout << ((arr[i][j] == INF) ? 0 : arr[i][j]) << " ";
		cout << "\n";
	}
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
