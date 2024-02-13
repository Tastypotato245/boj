// https://www.acmicpc.net/problem/1929

#include <iostream>
#include <algorithm>

using namespace std;

int	M;
int N;
int num[1000001];

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M;
	cin >> N;
	num[1] = -1;
	for (int i = 2; i * i <= N; ++i)
		if (num[i] != -1)
			for (int j = 2; i * j <= N; ++j)
				num[i * j] = -1;
	for (int i = M; i <= N; ++i)
		if (num[i] != -1)
			cout << i << "\n";
	return (0);
}
