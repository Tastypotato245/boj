// https://www.acmicpc.net/problem/1978

#include <iostream>
#include <algorithm>

using namespace std;

int	N;
int	cnt;
int	tmp;

bool IsPrime(int tmp)
{
	if (tmp == 0 || tmp == 1)
		return (false);
	for (int i = 2; i * i <= tmp; ++i)
		if (tmp % i == 0)
			return (false);
	return (true);
}

int	main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> tmp;
		if (IsPrime(tmp))
			++cnt;
	}
	cout << cnt << "\n";
	return (0);
}
