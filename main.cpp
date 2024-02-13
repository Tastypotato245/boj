// https://www.acmicpc.net/problem/10989

#include <iostream>

using namespace std;

int N;
int arr[10001];

int	main(void)
{
	int tmp;
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> tmp;
		arr[tmp] += 1;
	}
	for (int i = 1; i <= N; ++i)
		for (int j = 0; j < arr[i]; ++j)
			cout << i << "\n";
	return (0);
}
