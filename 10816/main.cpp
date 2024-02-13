// https://www.acmicpc.net/problem/10816

#include <iostream>

using namespace std;

int	N;
int M;
int tmp;
int arr[20000001];

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> tmp;
		arr[tmp + 10000000] += 1;
	}

	cin >> M;
	for (int i = 0; i < M; ++i)
	{
		cin >> tmp;
		cout << arr[tmp + 10000000] << " ";
	}
	cout << "\n";
	return (0);
}
