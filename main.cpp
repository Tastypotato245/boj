// https://www.acmicpc.net/problem/11047
// github/Tastypotato245

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int	K;
int coin[10];

void Solve()
{
	cin >> N >> K;
	int sum = 0;
	for (int i = 0; i < N ; ++i)
		cin >> coin[i];
	for (int i = N - 1; i >= 0 ; --i)
	{
		if (K / coin[i] > 0)
		{
			sum += K / coin[i];
			K = K % coin[i];
		}
	}
	cout << sum << "\n";
}

int	main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	Solve();
	return (0);
}
