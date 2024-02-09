// https://www.acmicpc.net/problem/2193

#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 90

using namespace std;

int	N = 0;

vector<long long> pibo(MAX);

void MakePibo(void)
{
	int	i = 1;

	pibo[0] = 1;
	pibo[1] = 1;
	while (++i < N)
		pibo[i] = pibo[i - 1] + pibo[i - 2];
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	MakePibo();
	cout << pibo[N - 1] << "\n";
	return (0);
}
